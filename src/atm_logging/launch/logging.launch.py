from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    config_path = get_package_share_directory("atm_logging") + "/config/logging_params.yaml"
    return LaunchDescription(
        [
            Node(
                package="atm_logging",
                executable="structured_event_logger_node",
                name="structured_event_logger",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_logging",
                executable="link_diagnostics_logger_node",
                name="link_diagnostics_logger",
                output="screen",
                parameters=[config_path],
            ),
            Node(
                package="atm_logging",
                executable="mission_summary_logger_node",
                name="mission_summary_logger",
                output="screen",
                parameters=[config_path],
            ),
        ]
    )
