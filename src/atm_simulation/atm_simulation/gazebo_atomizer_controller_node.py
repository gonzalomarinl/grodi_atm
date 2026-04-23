"""Controlador visual ligero para la simulacion del atomizador en Gazebo."""

from __future__ import annotations

import json
import math
import shutil
import subprocess
from dataclasses import dataclass

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


@dataclass
class SceneState:
    robot_x: float = 5.5
    tube_z: float = 2.55
    reel_angle: float = 0.0
    red_on: bool = False
    yellow_on: bool = False
    green_on: bool = False
    blue_on: bool = False
    ready_on: bool = False
    degraded_on: bool = False
    alert_on: bool = False


class GazeboAtomizerControllerNode(Node):
    """Aplica el estado visual calculado por la simulacion sobre las entidades del world."""

    def __init__(self) -> None:
        super().__init__("gazebo_atomizer_controller")

        self.declare_parameter("world_name", "atomizer_greenhouse")
        self.declare_parameter("update_period_sec", 0.1)
        self.declare_parameter("robot_y", 0.0)
        self.declare_parameter("robot_z", 3.78)
        self.declare_parameter("tube_y", 0.0)
        self.declare_parameter("tube_upper_z", 2.55)
        self.declare_parameter("led_visible_z", 0.12)
        self.declare_parameter("led_hidden_z", -2.0)
        self.declare_parameter("indicator_visible_z", 0.18)
        self.declare_parameter("indicator_hidden_z", -2.0)
        self.declare_parameter("led_red_x", 4.9)
        self.declare_parameter("led_yellow_x", 5.25)
        self.declare_parameter("led_green_x", 5.6)
        self.declare_parameter("led_blue_x", 5.95)
        self.declare_parameter("led_y", -6.0)
        self.declare_parameter("indicator_ready_x", 4.85)
        self.declare_parameter("indicator_degraded_x", 5.35)
        self.declare_parameter("indicator_alert_x", 5.85)
        self.declare_parameter("indicator_y", -5.2)
        self.declare_parameter("reel_x", 6.4)
        self.declare_parameter("reel_y", -4.2)
        self.declare_parameter("reel_z", 0.0)

        self.world_name = str(self.get_parameter("world_name").value)
        self.update_period = float(self.get_parameter("update_period_sec").value)
        self.robot_y = float(self.get_parameter("robot_y").value)
        self.robot_z = float(self.get_parameter("robot_z").value)
        self.tube_y = float(self.get_parameter("tube_y").value)
        self.tube_upper_z = float(self.get_parameter("tube_upper_z").value)
        self.led_visible_z = float(self.get_parameter("led_visible_z").value)
        self.led_hidden_z = float(self.get_parameter("led_hidden_z").value)
        self.indicator_visible_z = float(self.get_parameter("indicator_visible_z").value)
        self.indicator_hidden_z = float(self.get_parameter("indicator_hidden_z").value)
        self.led_y = float(self.get_parameter("led_y").value)
        self.indicator_y = float(self.get_parameter("indicator_y").value)
        self.led_positions = {
            "red": float(self.get_parameter("led_red_x").value),
            "yellow": float(self.get_parameter("led_yellow_x").value),
            "green": float(self.get_parameter("led_green_x").value),
            "blue": float(self.get_parameter("led_blue_x").value),
        }
        self.indicator_positions = {
            "ready": float(self.get_parameter("indicator_ready_x").value),
            "degraded": float(self.get_parameter("indicator_degraded_x").value),
            "alert": float(self.get_parameter("indicator_alert_x").value),
        }
        self.reel_x = float(self.get_parameter("reel_x").value)
        self.reel_y = float(self.get_parameter("reel_y").value)
        self.reel_z = float(self.get_parameter("reel_z").value)

        self.state = SceneState(tube_z=self.tube_upper_z)
        self.previous_pose_cache: dict[str, tuple[float, float, float, float, float, float]] = {}

        self.gz_bin = shutil.which("gz") or "/opt/ros/jazzy/opt/gz_tools_vendor/bin/gz"
        self.set_pose_service = f"/world/{self.world_name}/set_pose"

        self.create_subscription(String, "sim/scene/state", self.handle_scene_state, 20)
        self.create_timer(self.update_period, self.apply_scene)

        self.get_logger().info("Controlador visual de Gazebo listo para la nueva simulacion.")

    def handle_scene_state(self, msg: String) -> None:
        try:
            payload = json.loads(msg.data)
        except json.JSONDecodeError as exc:
            self.get_logger().warning(f"Estado visual invalido: {exc}")
            return

        self.state.robot_x = float(payload.get("robot_x", self.state.robot_x))
        self.state.tube_z = float(payload.get("tube_z", self.state.tube_z))
        self.state.reel_angle = float(payload.get("reel_angle", self.state.reel_angle))
        self.state.red_on = bool(payload.get("red_on", False))
        self.state.yellow_on = bool(payload.get("yellow_on", False))
        self.state.green_on = bool(payload.get("green_on", False))
        self.state.blue_on = bool(payload.get("blue_on", False))
        self.state.ready_on = bool(payload.get("ready_on", False))
        self.state.degraded_on = bool(payload.get("degraded_on", False))
        self.state.alert_on = bool(payload.get("alert_on", False))

    def apply_scene(self) -> None:
        self.set_entity_pose("atomizer_robot", self.state.robot_x, self.robot_y, self.robot_z)
        self.set_entity_pose("atomizer_t_tube", self.state.robot_x, self.tube_y, self.state.tube_z)
        self.set_entity_pose("ground_reel", self.reel_x, self.reel_y, self.reel_z, 0.0, 0.0, self.state.reel_angle)

        self.apply_led_state("red", self.state.red_on)
        self.apply_led_state("yellow", self.state.yellow_on)
        self.apply_led_state("green", self.state.green_on)
        self.apply_led_state("blue", self.state.blue_on)
        self.apply_indicator_state("ready", self.state.ready_on)
        self.apply_indicator_state("degraded", self.state.degraded_on)
        self.apply_indicator_state("alert", self.state.alert_on)

    def apply_led_state(self, color: str, enabled: bool) -> None:
        model_name = f"status_led_{color}_active"
        z_value = self.led_visible_z if enabled else self.led_hidden_z
        self.set_entity_pose(model_name, self.led_positions[color], self.led_y, z_value)

    def apply_indicator_state(self, name: str, enabled: bool) -> None:
        model_name = f"indicator_{name}_active"
        z_value = self.indicator_visible_z if enabled else self.indicator_hidden_z
        self.set_entity_pose(model_name, self.indicator_positions[name], self.indicator_y, z_value)

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
        pose_key = (
            round(x, 4),
            round(y, 4),
            round(z, 4),
            round(roll, 4),
            round(pitch, 4),
            round(yaw, 4),
        )
        if self.previous_pose_cache.get(name) == pose_key:
            return

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
            self.previous_pose_cache[name] = pose_key
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
