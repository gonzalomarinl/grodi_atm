from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    package_share = FindPackageShare("atm_simulation")
    params_file = PathJoinSubstitution([package_share, "config", "simulation_params.yaml"])

    world_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([package_share, "launch", "atomizer_world.launch.py"]))
    )

    controller_node = Node(
        package="atm_simulation",
        executable="gazebo_atomizer_controller_node",
        output="screen",
        parameters=[params_file],
    )

    sequence_node = Node(
        package="atm_simulation",
        executable="atomizer_demo_sequence_node",
        output="screen",
        parameters=[params_file],
    )

    console_node = Node(
        package="atm_simulation",
        executable="atomizer_operator_console_node",
        output="screen",
        parameters=[params_file],
    )

    return LaunchDescription(
        [
            world_launch,
            TimerAction(period=2.0, actions=[controller_node]),
            TimerAction(period=3.0, actions=[sequence_node]),
            TimerAction(period=4.0, actions=[console_node]),
        ]
    )
