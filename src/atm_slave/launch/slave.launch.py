from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    config_path = get_package_share_directory("atm_slave") + "/config/slave_params.yaml"
    link_config_path = get_package_share_directory("atm_link") + "/config/link_params.yaml"

    return LaunchDescription(
        [
            Node(
                package="atm_slave",
                executable="slave_state_manager_node",
                name="slave_state_manager",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_slave",
                executable="rail_motion_controller_node",
                name="rail_motion_controller",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_slave",
                executable="vertical_reel_controller_node",
                name="vertical_reel_controller",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_slave",
                executable="spray_controller_node",
                name="spray_controller",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_slave",
                executable="slave_health_publisher_node",
                name="slave_health_publisher",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_link",
                executable="slave_lora_bridge_node",
                name="slave_lora_bridge",
                output="screen",
                parameters=[link_config_path],
            ),
        ]
    )
