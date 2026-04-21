from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution


def generate_launch_description():
    world_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare('atm_simulation'), 'launch', 'atomizer_world.launch.py'])
        )
    )

    controller_node = Node(
        package='atm_simulation',
        executable='gazebo_atomizer_controller_node',
        output='screen',
    )

    demo_node = Node(
        package='atm_simulation',
        executable='atomizer_demo_sequence_node',
        output='screen',
        parameters=[{'autostart': True}],
    )

    return LaunchDescription([
        world_launch,
        TimerAction(period=2.0, actions=[controller_node]),
        TimerAction(period=4.0, actions=[demo_node]),
    ])
