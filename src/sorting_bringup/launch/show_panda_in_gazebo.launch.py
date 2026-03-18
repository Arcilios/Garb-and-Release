from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory
import os
import tempfile
import xacro


def generate_launch_description():
    sorting_gazebo_world = "/home/rcli/ws_sorting_final/src/sorting_gazebo/worlds/sorting_minimal.sdf"

    ros_gz_sim_pkg = get_package_share_directory("ros_gz_sim")
    panda_desc_pkg = get_package_share_directory("moveit_resources_panda_description")
    panda_xacro = os.path.join(panda_desc_pkg, "urdf", "panda.urdf.xacro")

    doc = xacro.process_file(panda_xacro)
    robot_description_xml = doc.toxml()

    tmp = tempfile.NamedTemporaryFile(mode="w", delete=False, suffix=".urdf")
    tmp.write(robot_description_xml)
    tmp.close()

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, "launch", "gz_sim.launch.py")
        ),
        launch_arguments={
            "gz_args": f"{sorting_gazebo_world} -v 4"
        }.items(),
    )

    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="panda_robot_state_publisher",
        output="screen",
        parameters=[{
            "robot_description": robot_description_xml
        }],
    )

    spawn_panda = TimerAction(
        period=2.0,
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(ros_gz_sim_pkg, "launch", "gz_spawn_model.launch.py")
                ),
                launch_arguments={
                    "world": "sorting_world",
                    "file": tmp.name,
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

    return LaunchDescription([
        gazebo,
        robot_state_publisher,
        spawn_panda,
    ])