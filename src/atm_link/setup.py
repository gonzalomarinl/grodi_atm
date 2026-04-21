from setuptools import find_packages, setup

package_name = 'atm_link'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/link.launch.py']),
        ('share/' + package_name + '/config', ['config/link_params.yaml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gonzalo',
    maintainer_email='gonzalo@todo.todo',
    description='Puente de comunicaciones compacto entre ROS 2 local y enlace LoRa.',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'master_lora_bridge_node = atm_link.master_lora_bridge_node:main',
            'slave_lora_bridge_node = atm_link.slave_lora_bridge_node:main',
        ],
    },
)
