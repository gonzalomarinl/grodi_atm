from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    config_path = get_package_share_directory("atm_master") + "/config/master_params.yaml"
    link_config_path = get_package_share_directory("atm_link") + "/config/link_params.yaml"

    return LaunchDescription(
        [
            Node(
                package="atm_master",
                executable="mission_manager_node",
                name="mission_manager",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_master",
                executable="pump_controller_node",
                name="pump_controller",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_master",
                executable="ground_reel_motor_node",
                name="ground_reel_motor",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_master",
                executable="hose_guide_controller_node",
                name="hose_guide_controller",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_master",
                executable="master_watchdog_node",
                name="master_watchdog",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_master",
                executable="mission_event_logger_node",
                name="mission_event_logger",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_master",
                executable="master_health_publisher_node",
                name="master_health_publisher",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_master",
                executable="server_mission_loader_node",
                name="server_mission_loader",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_link",
                executable="master_lora_bridge_node",
                name="master_lora_bridge",
                output="screen",
                parameters=[link_config_path],
            ),
        ]
    )
