import threading
import time
import subprocess

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.time import Time
from rclpy.duration import Duration

from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from control_msgs.action import FollowJointTrajectory
from geometry_msgs.msg import PoseStamped

from tf2_ros import Buffer, TransformListener

from sorting_interfaces.msg import SortTask
from moveit.planning import MoveItPy


class SortingExecutorNode(Node):
    def __init__(self):
        super().__init__('sorting_executor')

        self.cb_group = ReentrantCallbackGroup()

        self.task_sub = self.create_subscription(
            SortTask,
            '/sort_task',
            self.task_callback,
            10,
            callback_group=self.cb_group
        )

        self.lock = threading.Lock()
        self.busy = False

        self.get_logger().info('Creating MoveItPy instance...')
        self.panda = MoveItPy(node_name='moveit_py')
        self.arm = self.panda.get_planning_component('panda_arm')

        self.hand_client = ActionClient(
            self,
            FollowJointTrajectory,
            '/panda_hand_controller/follow_joint_trajectory',
            callback_group=self.cb_group
        )

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self, spin_thread=True)

        self.home_pose = None

        self.get_logger().info('Waiting to capture initial end-effector pose...')
        time.sleep(1.0)
        self.capture_initial_home_pose()

        self.get_logger().info('sorting_executor started. Waiting for /sort_task')

    # =========================
    # Home pose from initial TF
    # =========================
    def capture_initial_home_pose(self):
        pose = self.get_current_ee_pose()
        if pose is not None:
            self.home_pose = pose
            p = pose.pose.position
            q = pose.pose.orientation
            self.get_logger().info(
                f'Captured initial home pose: '
                f'pos=({p.x:.3f}, {p.y:.3f}, {p.z:.3f}), '
                f'quat=({q.x:.3f}, {q.y:.3f}, {q.z:.3f}, {q.w:.3f})'
            )
        else:
            self.get_logger().warn('Failed to capture initial home pose from TF. Using fallback pose.')
            self.home_pose = self.make_fallback_home_pose()

    def get_current_ee_pose(self):
        try:
            tf_msg = self.tf_buffer.lookup_transform(
                'world',
                'panda_link8',
                Time(),
                timeout=Duration(seconds=2.0)
            )

            pose = PoseStamped()
            pose.header.frame_id = 'world'
            pose.header.stamp = self.get_clock().now().to_msg()

            pose.pose.position.x = tf_msg.transform.translation.x
            pose.pose.position.y = tf_msg.transform.translation.y
            pose.pose.position.z = tf_msg.transform.translation.z

            pose.pose.orientation.x = tf_msg.transform.rotation.x
            pose.pose.orientation.y = tf_msg.transform.rotation.y
            pose.pose.orientation.z = tf_msg.transform.rotation.z
            pose.pose.orientation.w = tf_msg.transform.rotation.w

            return pose

        except Exception as e:
            self.get_logger().error(f'Failed to read current ee pose from TF: {e}')
            return None

    def make_fallback_home_pose(self):
        pose = PoseStamped()
        pose.header.frame_id = 'world'
        pose.header.stamp = self.get_clock().now().to_msg()

        pose.pose.position.x = 0.45
        pose.pose.position.y = 0.00
        pose.pose.position.z = 0.90

        pose.pose.orientation.x = 0.0
        pose.pose.orientation.y = 1.0
        pose.pose.orientation.z = 0.0
        pose.pose.orientation.w = 0.0
        return pose

    # =========================
    # Main task flow
    # =========================
    def task_callback(self, msg: SortTask):
        with self.lock:
            if self.busy:
                self.get_logger().warn('Executor busy, ignoring task')
                return
            self.busy = True

        try:
            if self.home_pose is None:
                self.capture_initial_home_pose()

            self.get_logger().info('================ EXECUTOR RECEIVED TASK ================')
            self.get_logger().info(f'object_id   : {msg.object_id}')
            self.get_logger().info(f'class_name  : {msg.class_name}')
            self.get_logger().info(f'target_bin  : {msg.target_bin}')

            # 0. 回初始位姿
            self.execute_pose(self.home_pose, 'initial_home_pose')
            time.sleep(0.5)

            # 1. 打开夹爪
            self.open_gripper()
            time.sleep(0.5)

            # 2. 到方块正上方
            self.execute_pose(msg.pregrasp_pose, 'pregrasp_pose')
            time.sleep(0.8)

            # 3. 竖直下降到抓取点
            self.execute_pose(msg.pick_pose, 'pick_pose')
            time.sleep(0.5)

            # 4. 闭合夹爪
            self.close_gripper()
            time.sleep(0.3)

            # 5. Gazebo 物理 attach
            self.gazebo_attach(msg.object_id)
            time.sleep(0.4)

            # 6. 从 cube 位置原地小抬升
            postgrasp_pose = PoseStamped()
            postgrasp_pose.header = msg.pick_pose.header
            postgrasp_pose.pose = msg.pick_pose.pose
            postgrasp_pose.pose.position.z = msg.pick_pose.pose.position.z + 0.1

            if msg.class_name == 'cube_red':
                postgrasp_pose.pose.position.y = msg.pick_pose.pose.position.y - 0.3
            else:
                postgrasp_pose.pose.position.y = msg.pick_pose.pose.position.y + 0.3

            self.execute_pose(postgrasp_pose, 'postgrasp_pose')
            time.sleep(0.5)

            # 7. 再抬高
            # self.execute_pose(msg.lift_pose, 'lift_pose')
            # time.sleep(0.5)
            self.gazebo_detach(msg.object_id)
            self.open_gripper()
            time.sleep(0.4)

            # 8. 去放置区
            self.execute_pose(msg.place_pose, 'place_pose')
            time.sleep(0.5)

            # 9. 张开夹爪
            self.open_gripper()
            time.sleep(0.5)

            # 10. Gazebo 物理 detach
            self.gazebo_detach(msg.object_id)
            time.sleep(0.4)

            # 11. 回初始位姿
            self.execute_pose(self.home_pose, 'initial_home_pose')

            self.get_logger().info('Real execution flow finished.')
            self.get_logger().info('========================================================')

        except Exception as e:
            self.get_logger().error(f'Execution failed: {e}')
        finally:
            with self.lock:
                self.busy = False

    # =========================
    # Arm motion
    # =========================
    def execute_pose(self, pose_stamped, name: str):
        p = pose_stamped.pose.position
        q = pose_stamped.pose.orientation
        self.get_logger().info(
            f'[PLAN] {name}: '
            f'pos=({p.x:.3f}, {p.y:.3f}, {p.z:.3f}) '
            f'quat=({q.x:.3f}, {q.y:.3f}, {q.z:.3f}, {q.w:.3f})'
        )

        self.arm.set_start_state_to_current_state()
        self.arm.set_goal_state(
            pose_stamped_msg=pose_stamped,
            pose_link='panda_link8'
        )

        plan_result = self.arm.plan()
        if not plan_result:
            raise RuntimeError(f'Planning failed for {name}')

        self.get_logger().info(f'[EXEC] executing {name}')
        self.panda.execute(plan_result.trajectory, controllers=[])

    # =========================
    # Gripper control
    # =========================
    def move_gripper(self, width: float, duration_sec: float = 1.0, timeout_sec: float = 5.0):
        if not self.hand_client.wait_for_server(timeout_sec=3.0):
            raise RuntimeError('panda_hand_controller action server not available')

        traj = JointTrajectory()
        traj.joint_names = ['panda_finger_joint1']

        point = JointTrajectoryPoint()
        point.positions = [width]
        point.time_from_start.sec = int(duration_sec)
        point.time_from_start.nanosec = int((duration_sec - int(duration_sec)) * 1e9)
        traj.points.append(point)

        goal_msg = FollowJointTrajectory.Goal()
        goal_msg.trajectory = traj

        self.get_logger().info(f'[GRIPPER] move width={width:.3f}')
        future = self.hand_client.send_goal_async(goal_msg)

        t0 = time.time()
        while not future.done():
            if time.time() - t0 > timeout_sec:
                raise RuntimeError('Timed out waiting for gripper goal acceptance')
            time.sleep(0.05)

        goal_handle = future.result()
        if goal_handle is None or not goal_handle.accepted:
            raise RuntimeError('Gripper goal rejected')

        result_future = goal_handle.get_result_async()
        t1 = time.time()
        while not result_future.done():
            if time.time() - t1 > timeout_sec:
                raise RuntimeError('Timed out waiting for gripper action result')
            time.sleep(0.05)

        result = result_future.result()
        if result is None:
            raise RuntimeError('Gripper action returned no result')

    def open_gripper(self):
        self.get_logger().info('[GRIPPER] open')
        self.move_gripper(0.04, duration_sec=1.0)

    def close_gripper(self):
        self.get_logger().info('[GRIPPER] close')
        self.move_gripper(0.001, duration_sec=1.0)

    # =========================
    # Gazebo attach/detach
    # =========================
    def gazebo_attach(self, object_id: str):
        topic = f'/panda/attach/{object_id}'
        self.get_logger().info(f'[GAZEBO ATTACH] {object_id} via {topic}')
        subprocess.run(
            ['gz', 'topic', '-t', topic, '-m', 'gz.msgs.Empty', '-p', ''],
            check=True
        )

    def gazebo_detach(self, object_id: str):
        topic = f'/panda/detach/{object_id}'
        self.get_logger().info(f'[GAZEBO DETACH] {object_id} via {topic}')
        subprocess.run(
            ['gz', 'topic', '-t', topic, '-m', 'gz.msgs.Empty', '-p', ''],
            check=True
        )

    def destroy_moveit(self):
        try:
            self.arm = None
            self.panda = None
        except Exception:
            pass


def main(args=None):
    rclpy.init(args=args)
    node = None
    executor = None
    try:
        node = SortingExecutorNode()
        executor = MultiThreadedExecutor(num_threads=4)
        executor.add_node(node)
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        if executor is not None:
            try:
                executor.shutdown()
            except Exception:
                pass
        if node is not None:
            try:
                node.destroy_moveit()
            except Exception:
                pass
            try:
                node.destroy_node()
            except Exception:
                pass
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()