from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    config_path = get_package_share_directory("atm_link") + "/config/link_params.yaml"
    return LaunchDescription(
        [
            Node(
                package="atm_link",
                executable="master_lora_bridge_node",
                name="master_lora_bridge",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_link",
                executable="slave_lora_bridge_node",
                name="slave_lora_bridge",
                output="screen",
                parameters=[config_path],
            ),
        ]
    )
