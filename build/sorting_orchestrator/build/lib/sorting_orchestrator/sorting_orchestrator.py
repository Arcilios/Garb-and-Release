import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from sorting_interfaces.msg import DetectedObjectArray, SortTask


class SortingOrchestratorNode(Node):
    def __init__(self):
        super().__init__('sorting_orchestrator')

        self.detected_sub = self.create_subscription(
            DetectedObjectArray,
            '/detected_objects',
            self.detected_callback,
            10
        )

        self.task_pub = self.create_publisher(
            SortTask,
            '/sort_task',
            10
        )

        self.busy = False
        self.cooldown_sec = 8.0
        self.last_task_time = None

        # 更保守的抓取高度
        self.pregrasp_z = 0.75
        self.pick_z = 0.71
        self.lift_z = 0.85

        # ready pose
        self.ready_x = 0.45
        self.ready_y = 0.00
        self.ready_z = 0.90

        self.get_logger().info('sorting_orchestrator started. Waiting for /detected_objects')

    def detected_callback(self, msg: DetectedObjectArray):
        now = self.get_clock().now()

        if self.busy and self.last_task_time is not None:
            elapsed = (now - self.last_task_time).nanoseconds / 1e9
            if elapsed < self.cooldown_sec:
                return
            self.busy = False

        if not msg.objects:
            self.get_logger().warn('No objects in detection message')
            return

        valid_objects = []
        for obj in msg.objects:
            x = obj.pose.pose.position.x
            y = obj.pose.pose.position.y

            self.get_logger().info(
                f'Detected candidate: id={obj.object_id}, class={obj.class_name}, '
                f'pos=({x:.3f}, {y:.3f})'
            )

            if 0.40 <= x <= 0.62 and -0.20 <= y <= 0.20:
                valid_objects.append(obj)

        if not valid_objects:
            self.get_logger().warn('No detected objects inside valid area')
            return

        valid_objects.sort(
            key=lambda o: (
                o.pose.pose.position.x,
                abs(o.pose.pose.position.y)
            )
        )
        obj = valid_objects[0]

        raw_x = obj.pose.pose.position.x
        raw_y = obj.pose.pose.position.y

        # 不再硬裁剪到很小盒子，避免永远够不到
        cube_x = raw_x
        cube_y = raw_y + 0.01

        target_bin = self.class_to_bin(obj.class_name)

        self.get_logger().info(
            f'Selected object_id={obj.object_id}, class={obj.class_name}, '
            f'raw=({raw_x:.3f},{raw_y:.3f}), '
            f'grasp=({cube_x:.3f},{cube_y:.3f}), '
            f'target_bin={target_bin}'
        )

        task = SortTask()
        task.object_id = obj.object_id
        task.class_name = obj.class_name
        task.target_bin = target_bin

        task.pregrasp_pose = self.make_pose(cube_x, cube_y, self.pregrasp_z)
        task.pick_pose = self.make_pose(cube_x, cube_y, self.pick_z)
        task.lift_pose = self.make_pose(cube_x, cube_y, self.lift_z)

        if target_bin == 'bin_right':
            task.place_pose = self.make_pose(0.46, -0.12, 0.92)
        else:
            task.place_pose = self.make_pose(0.46, 0.12, 0.92)

        # 这个字段仍然保留，但 executor 最后会直接回 named config 'ready'
        task.retreat_pose = self.make_pose(self.ready_x, self.ready_y, self.ready_z)

        self.task_pub.publish(task)
        self.busy = True
        self.last_task_time = now

        self.get_logger().info(
            f'Published /sort_task for {obj.object_id}, '
            f'place=({task.place_pose.pose.position.x:.3f}, '
            f'{task.place_pose.pose.position.y:.3f}, '
            f'{task.place_pose.pose.position.z:.3f})'
        )

    def class_to_bin(self, class_name: str) -> str:
        if class_name == 'cube_red':
            return 'bin_right'
        elif class_name == 'cube_blue':
            return 'bin_left'
        return 'bin_left'

    def make_pose(self, x: float, y: float, z: float) -> PoseStamped:
        pose = PoseStamped()
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.header.frame_id = 'world'
        pose.pose.position.x = float(x)
        pose.pose.position.y = float(y)
        pose.pose.position.z = float(z)

        pose.pose.orientation.x = 0.0
        pose.pose.orientation.y = 1.0
        pose.pose.orientation.z = 0.0
        pose.pose.orientation.w = 0.0
        return pose


def main(args=None):
    rclpy.init(args=args)
    node = None
    try:
        node = SortingOrchestratorNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node is not None:
            try:
                node.destroy_node()
            except Exception:
                pass
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()