from setuptools import find_packages, setup

package_name = 'atm_simulation'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (
            'share/' + package_name + '/launch',
            [
                'launch/atomizer_world.launch.py',
                'launch/atomizer_demo.launch.py',
                'launch/atomizer_interactive.launch.py',
            ],
        ),
        ('share/' + package_name + '/worlds', ['worlds/atomizer_greenhouse.sdf']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gonzalo',
    maintainer_email='gonzalo@todo.todo',
    description='Simulación Gazebo del atomizador sobre raíl.',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'gazebo_atomizer_controller_node = atm_simulation.gazebo_atomizer_controller_node:main',
            'atomizer_demo_sequence_node = atm_simulation.atomizer_demo_sequence_node:main',
            'atomizer_operator_console_node = atm_simulation.atomizer_operator_console_node:main',
        ],
    },
)
