from launch import LaunchDescription
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder

import tempfile
import yaml
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder(
        "panda",
        package_name="moveit_resources_panda_moveit_config"
    ).to_moveit_configs()

    executor_pkg_share = get_package_share_directory("sorting_executor_py")
    moveit_py_yaml = os.path.join(executor_pkg_share, "config", "moveit_py.yaml")

    all_params = {}
    all_params.update(moveit_config.robot_description)
    all_params.update(moveit_config.robot_description_semantic)
    all_params.update(moveit_config.robot_description_kinematics)
    all_params.update(moveit_config.joint_limits)
    all_params.update(moveit_config.planning_pipelines)
    all_params.update(moveit_config.trajectory_execution)
    all_params.update(moveit_config.planning_scene_monitor)

    with open(moveit_py_yaml, "r") as f:
        moveit_py_params = yaml.safe_load(f)

    all_params.update(moveit_py_params)
    all_params["use_sim_time"] = True

    tmp = tempfile.NamedTemporaryFile(mode="w", delete=False, suffix=".yaml")
    yaml.safe_dump(
        {
            "/**": {
                "ros__parameters": all_params
            }
        },
        tmp
    )
    tmp.close()

    executor_node = Node(
        package="sorting_executor_py",
        executable="sorting_executor",
        name="sorting_executor",
        output="screen",
        parameters=[tmp.name],
    )

    return LaunchDescription([executor_node])