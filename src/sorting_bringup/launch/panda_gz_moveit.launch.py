from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

import os
import xacro

from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():
    ros_gz_sim_pkg = get_package_share_directory("ros_gz_sim")
    sorting_bringup_pkg = get_package_share_directory("sorting_bringup")
    sorting_gazebo_pkg = get_package_share_directory("sorting_gazebo")
    panda_moveit_pkg = get_package_share_directory("moveit_resources_panda_moveit_config")

    world_file = os.path.join(sorting_gazebo_pkg, "worlds", "sorting_minimal.sdf")
    panda_xacro = os.path.join(sorting_bringup_pkg, "urdf", "panda_gz.urdf.xacro")

    robot_description_xml = xacro.process_file(panda_xacro).toxml()

    moveit_config = MoveItConfigsBuilder(
        "panda",
        package_name="moveit_resources_panda_moveit_config"
    ).to_moveit_configs()

    static_tf_world_to_panda = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_tf_world_to_panda",
        output="screen",
        arguments=["0", "0", "0", "0", "0", "0", "world", "panda_link0"],
    )

    planning_scene_monitor_no_octomap = {
        "publish_planning_scene": True,
        "publish_geometry_updates": True,
        "publish_state_updates": True,
        "publish_transforms_updates": True,
        "monitor_dynamics": False,
        "octomap_frame": "",
        "octomap_resolution": 0.0,
    }

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, "launch", "gz_sim.launch.py")
        ),
        launch_arguments={"gz_args": f"{world_file} -r -v 4"}.items(),
    )

    rsp = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[
            {"robot_description": robot_description_xml},
            {"use_sim_time": True},
        ],
    )

    spawn = TimerAction(
        period=2.0,
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(ros_gz_sim_pkg, "launch", "gz_spawn_model.launch.py")
                ),
                launch_arguments={
                    "world": "sorting_world",
                    "topic": "/robot_description",
                    "entity_name": "panda",
                    "x": "0.0",
                    "y": "0.0",
                    "z": "0.0",
                    "roll": "0.0",
                    "pitch": "0.0",
                    "yaw": "0.0",
                }.items(),
            )
        ],
    )

    joint_state_broadcaster_spawner = TimerAction(
        period=4.0,
        actions=[
            Node(
                package="controller_manager",
                executable="spawner",
                arguments=["joint_state_broadcaster"],
                output="screen",
            )
        ],
    )
    clock_bridge = Node(
    package="ros_gz_bridge",
    executable="parameter_bridge",
    arguments=[
        "/world/sorting_world/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock"
    ],
    remappings=[
        ("/world/sorting_world/clock", "/clock"),
    ],
    output="screen",
)

    panda_arm_controller_spawner = TimerAction(
        period=5.0,
        actions=[
            Node(
                package="controller_manager",
                executable="spawner",
                arguments=["panda_arm_controller"],
                output="screen",
            )
        ],
    )
    camera_bridge = Node(
    package="ros_gz_bridge",
    executable="parameter_bridge",
    arguments=[
        "/camera@sensor_msgs/msg/Image@gz.msgs.Image",
        "/camera_info@sensor_msgs/msg/CameraInfo@gz.msgs.CameraInfo",
        "/grab_camera@sensor_msgs/msg/Image@gz.msgs.Image",
        "/grab_camera_info@sensor_msgs/msg/CameraInfo@gz.msgs.CameraInfo",
    ],
    output="screen",
)
    move_group = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[
            moveit_config.to_dict(),
            planning_scene_monitor_no_octomap,
            {"use_sim_time": True},
        ],
    )
    panda_hand_controller_spawner = TimerAction(
    period=6.0,
    actions=[
        Node(
            package="controller_manager",
            executable="spawner",
            arguments=["panda_hand_controller"],
            output="screen",
        )
    ],
)

    rviz = Node(
        package="rviz2",
        executable="rviz2",
        output="screen",
        arguments=["-d", os.path.join(panda_moveit_pkg, "launch", "moveit.rviz")],
        parameters=[
            moveit_config.to_dict(),
            {"use_sim_time": True},
        ],
    )

    return LaunchDescription([
        gazebo,
        clock_bridge,
        rsp,
        spawn,
        joint_state_broadcaster_spawner,
        panda_arm_controller_spawner,
        move_group,
        rviz,
        panda_hand_controller_spawner
    ])