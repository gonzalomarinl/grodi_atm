"""Controlador visual del atomizador dentro de Gazebo."""

from __future__ import annotations

import math
import shutil
import subprocess
from dataclasses import dataclass

import rclpy
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Twist
from rclpy.node import Node
from std_msgs.msg import Bool, Float32, String


@dataclass
class SimState:
    robot_x: float = -4.8
    robot_y: float = 0.0
    robot_z: float = 4.0
    robot_vx: float = 0.0
    head_z: float = 2.05
    head_vz: float = 0.0
    reel_angle: float = 0.0
    reel_velocity: float = 0.0
    pump_enabled: bool = False
    spray_enabled: bool = False


class GazeboAtomizerControllerNode(Node):
    """Actualiza las entidades del mundo SDF para simular la secuencia del atomizador."""

    def __init__(self) -> None:
        super().__init__("gazebo_atomizer_controller")

        self.declare_parameter("world_name", "atomizer_greenhouse")
        self.declare_parameter("update_period_sec", 0.1)
        self.declare_parameter("robot_min_x", -4.8)
        self.declare_parameter("robot_max_x", 4.8)
        self.declare_parameter("robot_speed_limit", 1.2)
        self.declare_parameter("head_upper_z", 2.05)
        self.declare_parameter("head_lower_z", 1.15)
        self.declare_parameter("vertical_speed_limit", 0.8)

        self.world_name = str(self.get_parameter("world_name").value)
        self.update_period = float(self.get_parameter("update_period_sec").value)
        self.robot_min_x = float(self.get_parameter("robot_min_x").value)
        self.robot_max_x = float(self.get_parameter("robot_max_x").value)
        self.robot_speed_limit = float(self.get_parameter("robot_speed_limit").value)
        self.head_upper_z = float(self.get_parameter("head_upper_z").value)
        self.head_lower_z = float(self.get_parameter("head_lower_z").value)
        self.vertical_speed_limit = float(self.get_parameter("vertical_speed_limit").value)

        self.gz_bin = shutil.which("gz") or "/opt/ros/jazzy/opt/gz_tools_vendor/bin/gz"
        self.set_pose_service = f"/world/{self.world_name}/set_pose"
        self.state = SimState(head_z=self.head_upper_z)
        self.last_stage = ""

        self.robot_pose_pub = self.create_publisher(Pose, "sim/status/robot_pose", 10)
        self.head_pose_pub = self.create_publisher(Pose, "sim/status/head_pose", 10)
        self.reel_angle_pub = self.create_publisher(Float32, "sim/status/reel_angle", 10)
        self.pump_state_pub = self.create_publisher(Bool, "sim/status/pump_enabled", 10)
        self.summary_pub = self.create_publisher(String, "sim/status/summary", 10)

        self.create_subscription(Twist, "sim/robot/cmd_vel", self.handle_robot_cmd, 10)
        self.create_subscription(Float32, "sim/reel/cmd_vel", self.handle_reel_cmd, 10)
        self.create_subscription(Float32, "sim/vertical/cmd_vel", self.handle_vertical_cmd, 10)
        self.create_subscription(Bool, "sim/pump/enable", self.handle_pump_cmd, 10)
        self.create_subscription(Bool, "sim/spray/enable", self.handle_spray_cmd, 10)

        self.create_timer(self.update_period, self.update_simulation)
        self.create_timer(0.5, self.publish_status)

        self.initialize_scene()
        self.get_logger().info("Gazebo atomizer controller listo.")

    def initialize_scene(self) -> None:
        self.apply_robot_pose()
        self.apply_head_pose()
        self.apply_reel_pose()
        self.apply_hose_pose()
        self.apply_spray_pose()

    def handle_robot_cmd(self, msg: Twist) -> None:
        self.state.robot_vx = max(-self.robot_speed_limit, min(self.robot_speed_limit, msg.linear.x))

    def handle_reel_cmd(self, msg: Float32) -> None:
        self.state.reel_velocity = msg.data

    def handle_vertical_cmd(self, msg: Float32) -> None:
        self.state.head_vz = max(-self.vertical_speed_limit, min(self.vertical_speed_limit, msg.data))

    def handle_pump_cmd(self, msg: Bool) -> None:
        self.state.pump_enabled = bool(msg.data)

    def handle_spray_cmd(self, msg: Bool) -> None:
        self.state.spray_enabled = bool(msg.data)

    def update_simulation(self) -> None:
        dt = self.update_period
        self.state.robot_x = max(
            self.robot_min_x,
            min(self.robot_max_x, self.state.robot_x + self.state.robot_vx * dt),
        )
        self.state.head_z = max(
            self.head_lower_z,
            min(self.head_upper_z, self.state.head_z + self.state.head_vz * dt),
        )
        self.state.reel_angle += self.state.reel_velocity * dt

        self.apply_robot_pose()
        self.apply_head_pose()
        self.apply_reel_pose()
        self.apply_hose_pose()
        self.apply_spray_pose()

    def apply_robot_pose(self) -> None:
        self.set_entity_pose("atomizer_robot", self.state.robot_x, self.state.robot_y, self.state.robot_z)

    def apply_head_pose(self) -> None:
        self.set_entity_pose("atomizer_head", self.state.robot_x, self.state.robot_y, self.state.head_z)

    def apply_reel_pose(self) -> None:
        self.set_entity_pose("ground_reel", -6.3, -6.0, 0.0, 0.0, 0.0, self.state.reel_angle)

    def apply_hose_pose(self) -> None:
        reel_anchor = (-6.3, -6.0, 1.25)
        robot_anchor = (self.state.robot_x, self.state.robot_y, 3.85)
        dx = robot_anchor[0] - reel_anchor[0]
        dy = robot_anchor[1] - reel_anchor[1]
        dz = robot_anchor[2] - reel_anchor[2]
        yaw = math.atan2(dy, dx)
        horizontal = math.sqrt(dx * dx + dy * dy)
        pitch = -math.atan2(dz, horizontal if horizontal > 1e-6 else 1e-6)
        mid_x = (reel_anchor[0] + robot_anchor[0]) * 0.5
        mid_y = (reel_anchor[1] + robot_anchor[1]) * 0.5
        mid_z = (reel_anchor[2] + robot_anchor[2]) * 0.5
        self.set_entity_pose("feed_hose_visual", mid_x, mid_y, mid_z, 0.0, pitch, yaw)

    def apply_spray_pose(self) -> None:
        if self.state.spray_enabled and self.state.pump_enabled:
            self.set_entity_pose("spray_plume", self.state.robot_x, self.state.robot_y, self.state.head_z - 0.08)
        else:
            self.set_entity_pose("spray_plume", self.state.robot_x, self.state.robot_y, -3.0)

    def publish_status(self) -> None:
        robot_pose = Pose()
        robot_pose.position.x = float(self.state.robot_x)
        robot_pose.position.y = float(self.state.robot_y)
        robot_pose.position.z = float(self.state.robot_z)
        robot_pose.orientation.w = 1.0
        self.robot_pose_pub.publish(robot_pose)

        head_pose = Pose()
        head_pose.position.x = float(self.state.robot_x)
        head_pose.position.y = float(self.state.robot_y)
        head_pose.position.z = float(self.state.head_z)
        head_pose.orientation.w = 1.0
        self.head_pose_pub.publish(head_pose)

        reel_msg = Float32()
        reel_msg.data = float(self.state.reel_angle)
        self.reel_angle_pub.publish(reel_msg)

        pump_msg = Bool()
        pump_msg.data = bool(self.state.pump_enabled)
        self.pump_state_pub.publish(pump_msg)

        stage = self.current_summary()
        if stage != self.last_stage:
            summary = String()
            summary.data = stage
            self.summary_pub.publish(summary)
            self.last_stage = stage

    def current_summary(self) -> str:
        if self.state.spray_enabled and self.state.pump_enabled:
            return "SPRAYING"
        if self.state.head_vz < -1e-3:
            return "LOWERING"
        if self.state.head_vz > 1e-3:
            return "RAISING"
        if abs(self.state.robot_vx) > 1e-3 and self.state.robot_vx > 0:
            return "MOVING_FORWARD"
        if abs(self.state.robot_vx) > 1e-3 and self.state.robot_vx < 0:
            return "RETURNING"
        if abs(self.state.reel_velocity) > 1e-3:
            return "REEL_ACTIVE"
        return "IDLE"

    def set_entity_pose(
        self,
        name: str,
        x: float,
        y: float,
        z: float,
        roll: float = 0.0,
        pitch: float = 0.0,
        yaw: float = 0.0,
    ) -> None:
        qx, qy, qz, qw = self.euler_to_quaternion(roll, pitch, yaw)
        request = (
            f'name: "{name}" '
            f'position: {{x: {x:.4f}, y: {y:.4f}, z: {z:.4f}}} '
            f'orientation: {{x: {qx:.6f}, y: {qy:.6f}, z: {qz:.6f}, w: {qw:.6f}}}'
        )
        try:
            subprocess.run(
                [
                    self.gz_bin,
                    "service",
                    "-s",
                    self.set_pose_service,
                    "--reqtype",
                    "gz.msgs.Pose",
                    "--reptype",
                    "gz.msgs.Boolean",
                    "--timeout",
                    "1000",
                    "--req",
                    request,
                ],
                check=False,
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL,
            )
        except Exception as exc:
            self.get_logger().warning(f"No se pudo actualizar la entidad {name}: {exc}")

    @staticmethod
    def euler_to_quaternion(roll: float, pitch: float, yaw: float) -> tuple[float, float, float, float]:
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)
        qw = cr * cp * cy + sr * sp * sy
        qx = sr * cp * cy - cr * sp * sy
        qy = cr * sp * cy + sr * cp * sy
        qz = cr * cp * sy - sr * sp * cy
        return qx, qy, qz, qw


def main() -> None:
    rclpy.init()
    node = GazeboAtomizerControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
