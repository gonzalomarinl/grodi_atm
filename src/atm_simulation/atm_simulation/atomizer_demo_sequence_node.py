"""Secuencia simulada del atomizador con modo automático e interactivo."""

from __future__ import annotations

import json
from dataclasses import dataclass, field

import rclpy
from geometry_msgs.msg import Pose, Twist
from rclpy.node import Node
from std_msgs.msg import Bool, Float32, String
from std_srvs.srv import Trigger


@dataclass
class DemoState:
    robot_x: float = -4.8
    head_z: float = 2.05
    running: bool = False
    phase: str = "IDLE"
    phase_start_time: float = 0.0
    spray_start_time: float = 0.0
    mission_id: str = ""
    mission_mode: str = ""
    target_queue: list[int] = field(default_factory=list)
    active_gap: int = 0
    active_gap_x: float = -4.8
    completed_targets: list[int] = field(default_factory=list)
    return_requested: bool = False


class AtomizerDemoSequenceNode(Node):
    """Publica órdenes de simulación y acepta comandos manuales tipo agricultor."""

    def __init__(self) -> None:
        super().__init__("atomizer_demo_sequence")

        self.declare_parameter("autostart", True)
        self.declare_parameter("home_x", -4.8)
        self.declare_parameter("move_speed", 0.9)
        self.declare_parameter("return_speed", -0.9)
        self.declare_parameter("lower_speed", -0.65)
        self.declare_parameter("raise_speed", 0.65)
        self.declare_parameter("spray_duration_sec", 3.0)
        self.declare_parameter("target_head_z", 1.15)
        self.declare_parameter("upper_head_z", 2.05)
        self.declare_parameter("gap_positions", [-3.6, -1.2, 1.2, 3.6])
        self.declare_parameter("pump_lead_time_sec", 0.4)

        self.home_x = float(self.get_parameter("home_x").value)
        self.move_speed = float(self.get_parameter("move_speed").value)
        self.return_speed = float(self.get_parameter("return_speed").value)
        self.lower_speed = float(self.get_parameter("lower_speed").value)
        self.raise_speed = float(self.get_parameter("raise_speed").value)
        self.spray_duration = float(self.get_parameter("spray_duration_sec").value)
        self.target_head_z = float(self.get_parameter("target_head_z").value)
        self.upper_head_z = float(self.get_parameter("upper_head_z").value)
        self.pump_lead_time = float(self.get_parameter("pump_lead_time_sec").value)
        self.gap_positions = [float(value) for value in self.get_parameter("gap_positions").value]

        self.state = DemoState(robot_x=self.home_x, head_z=self.upper_head_z)
        self.autostart_timer = None

        self.robot_cmd_pub = self.create_publisher(Twist, "sim/robot/cmd_vel", 10)
        self.reel_cmd_pub = self.create_publisher(Float32, "sim/reel/cmd_vel", 10)
        self.vertical_cmd_pub = self.create_publisher(Float32, "sim/vertical/cmd_vel", 10)
        self.pump_pub = self.create_publisher(Bool, "sim/pump/enable", 10)
        self.spray_pub = self.create_publisher(Bool, "sim/spray/enable", 10)
        self.phase_pub = self.create_publisher(String, "sim/demo/phase", 10)
        self.state_pub = self.create_publisher(String, "sim/demo/state", 10)

        self.create_subscription(Pose, "sim/status/robot_pose", self.handle_robot_pose, 10)
        self.create_subscription(Pose, "sim/status/head_pose", self.handle_head_pose, 10)
        self.create_subscription(String, "sim/demo/command", self.handle_command, 20)

        self.create_service(Trigger, "sim/demo/start", self.handle_start)
        self.create_service(Trigger, "sim/demo/stop", self.handle_stop)
        self.create_timer(0.1, self.control_loop)

        if bool(self.get_parameter("autostart").value):
            self.autostart_timer = self.create_timer(2.0, self.autostart_once)

        self.get_logger().info("Atomizer demo sequence listo.")

    def autostart_once(self) -> None:
        if self.autostart_timer is not None:
            self.autostart_timer.cancel()
            self.autostart_timer = None

        if not self.state.running and self.state.phase == "IDLE":
            default_targets = list(range(1, len(self.gap_positions) + 1))
            self.start_mission("demo_general", "GENERAL", default_targets)

    def handle_start(self, _request, response):
        if self.state.running:
            response.success = False
            response.message = "La demo ya está en ejecución."
            return response

        default_targets = list(range(1, len(self.gap_positions) + 1))
        self.start_mission("demo_general", "GENERAL", default_targets)
        response.success = True
        response.message = "Demo iniciada."
        return response

    def handle_stop(self, _request, response):
        if not self.state.running:
            response.success = False
            response.message = "No hay ninguna simulación activa."
            return response

        self.request_return_home("Parada manual solicitada.")
        response.success = True
        response.message = "Retorno a base solicitado."
        return response

    def handle_command(self, msg: String) -> None:
        try:
            payload = json.loads(msg.data)
        except json.JSONDecodeError as exc:
            self.get_logger().warning(f"Comando interactivo inválido: {exc}")
            return

        command = str(payload.get("command", "")).strip().lower()
        if command == "run_mission":
            if self.state.running:
                self.get_logger().warning("Ya hay una misión simulada activa. Cancela o espera a que termine.")
                return

            mission_id = str(payload.get("mission_id", "interactive_mission"))
            mission_mode = str(payload.get("mission_mode", "GENERAL")).upper()
            targets = [int(value) for value in payload.get("targets", [])]
            validated_targets = self.validate_targets(targets)
            if not validated_targets:
                self.get_logger().warning("No se han recibido objetivos válidos para la simulación.")
                return
            self.start_mission(mission_id, mission_mode, validated_targets)
            return

        if command == "return_home":
            self.request_return_home("Retorno a base solicitado desde consola.")
            return

        if command == "reset_idle":
            self.stop_demo("Reset manual a IDLE.")
            return

        if command == "status":
            self.publish_state_snapshot()
            return

        self.get_logger().warning(f"Comando interactivo desconocido: {command}")

    def validate_targets(self, targets: list[int]) -> list[int]:
        valid_targets: list[int] = []
        max_gap = len(self.gap_positions)
        for value in targets:
            if 1 <= value <= max_gap and value not in valid_targets:
                valid_targets.append(value)
        return valid_targets

    def start_mission(self, mission_id: str, mission_mode: str, targets: list[int]) -> None:
        self.state.running = True
        self.state.mission_id = mission_id
        self.state.mission_mode = mission_mode
        self.state.target_queue = list(targets)
        self.state.completed_targets.clear()
        self.state.return_requested = False
        self.state.active_gap = 0
        self.state.active_gap_x = self.home_x
        self.enter_phase("MISSION_ACCEPTED")
        self.get_logger().info(
            f"Iniciando misión simulada {mission_id} ({mission_mode}) con objetivos {targets}."
        )

    def request_return_home(self, reason: str) -> None:
        if not self.state.running and self.state.phase == "IDLE":
            self.get_logger().info("El robot ya está en base e inactivo.")
            return
        self.state.return_requested = True
        self.get_logger().info(reason)
        if self.state.phase not in {"RETURNING_HOME", "COMPLETED"}:
            self.enter_phase("RETURNING_HOME")
            self.publish_robot_speed(self.return_speed)
            self.publish_reel(-0.8)
            self.publish_vertical_speed(0.0)
            self.publish_pump(False)
            self.publish_spray(False)

    def handle_robot_pose(self, msg: Pose) -> None:
        self.state.robot_x = msg.position.x

    def handle_head_pose(self, msg: Pose) -> None:
        self.state.head_z = msg.position.z

    def control_loop(self) -> None:
        if not self.state.running:
            return

        now = self.get_clock().now().nanoseconds / 1e9

        if self.state.phase == "MISSION_ACCEPTED":
            if not self.state.target_queue:
                self.request_return_home("Misión vacía: retorno inmediato.")
                return
            self.prepare_next_target()
            return

        if self.state.phase == "MOVING_TO_GAP":
            move_direction = 1.0 if self.state.active_gap_x >= self.state.robot_x else -1.0
            move_speed = abs(self.move_speed) * move_direction
            move_duration = abs(self.state.active_gap_x - self.state.robot_x) / max(abs(self.move_speed), 1e-6)
            self.publish_robot_speed(move_speed)
            self.publish_reel(0.8 if move_speed > 0 else -0.8)
            if abs(self.state.robot_x - self.state.active_gap_x) <= 0.05 or (
                now - self.state.phase_start_time
            ) >= move_duration:
                self.publish_robot_speed(0.0)
                self.publish_reel(0.0)
                self.publish_vertical_speed(self.lower_speed)
                self.enter_phase("LOWERING_ATOMIZER")
            return

        if self.state.phase == "LOWERING_ATOMIZER":
            lower_duration = abs(self.upper_head_z - self.target_head_z) / max(abs(self.lower_speed), 1e-6)
            if self.state.head_z <= self.target_head_z + 0.02 or (now - self.state.phase_start_time) >= lower_duration:
                self.publish_vertical_speed(0.0)
                self.publish_pump(True)
                self.publish_spray(False)
                self.enter_phase("PUMP_PRIMING")
            return

        if self.state.phase == "PUMP_PRIMING":
            if (now - self.state.phase_start_time) >= self.pump_lead_time:
                self.publish_spray(True)
                self.publish_vertical_speed(self.raise_speed)
                self.state.spray_start_time = now
                self.enter_phase("SPRAYING_ASCENT")
            return

        if self.state.phase == "SPRAYING_ASCENT":
            elapsed = now - self.state.spray_start_time
            if elapsed >= (self.spray_duration * 0.8):
                self.publish_pump(False)
            if elapsed >= self.spray_duration:
                self.publish_spray(False)
                self.publish_vertical_speed(0.0)
                self.enter_phase("TARGET_COMPLETED")
            return

        if self.state.phase == "TARGET_COMPLETED":
            if self.state.active_gap not in self.state.completed_targets:
                self.state.completed_targets.append(self.state.active_gap)
            if self.state.return_requested or not self.state.target_queue:
                self.request_return_home("Objetivos completados: retorno a base.")
            else:
                self.prepare_next_target()
            return

        if self.state.phase == "RETURNING_HOME":
            return_duration = abs(self.state.robot_x - self.home_x) / max(abs(self.return_speed), 1e-6)
            if self.state.robot_x <= self.home_x + 0.05 or (now - self.state.phase_start_time) >= return_duration:
                self.stop_demo("Misión finalizada. Robot en base.")
            return

    def prepare_next_target(self) -> None:
        if not self.state.target_queue:
            self.request_return_home("Sin más objetivos pendientes.")
            return

        self.state.active_gap = self.state.target_queue.pop(0)
        self.state.active_gap_x = self.gap_positions[self.state.active_gap - 1]
        self.publish_pump(False)
        self.publish_spray(False)
        self.publish_vertical_speed(0.0)
        self.enter_phase(f"MOVING_TO_GAP_{self.state.active_gap}")
        self.state.phase = "MOVING_TO_GAP"
        self.state.phase_start_time = self.get_clock().now().nanoseconds / 1e9
        self.publish_phase()
        self.publish_state_snapshot()

    def stop_demo(self, reason: str) -> None:
        self.publish_robot_speed(0.0)
        self.publish_vertical_speed(0.0)
        self.publish_reel(0.0)
        self.publish_pump(False)
        self.publish_spray(False)
        self.state.running = False
        self.state.return_requested = False
        self.state.target_queue.clear()
        self.state.active_gap = 0
        self.state.active_gap_x = self.home_x
        self.enter_phase("COMPLETED")
        self.get_logger().info(reason)
        self.state.phase = "IDLE"
        self.publish_phase()
        self.publish_state_snapshot()

    def publish_robot_speed(self, speed: float) -> None:
        msg = Twist()
        msg.linear.x = float(speed)
        self.robot_cmd_pub.publish(msg)

    def publish_reel(self, speed: float) -> None:
        msg = Float32()
        msg.data = float(speed)
        self.reel_cmd_pub.publish(msg)

    def publish_vertical_speed(self, speed: float) -> None:
        msg = Float32()
        msg.data = float(speed)
        self.vertical_cmd_pub.publish(msg)

    def publish_pump(self, enabled: bool) -> None:
        msg = Bool()
        msg.data = bool(enabled)
        self.pump_pub.publish(msg)

    def publish_spray(self, enabled: bool) -> None:
        msg = Bool()
        msg.data = bool(enabled)
        self.spray_pub.publish(msg)

    def publish_phase(self) -> None:
        msg = String()
        msg.data = self.state.phase
        self.phase_pub.publish(msg)
        self.get_logger().info(f"Fase simulada: {self.state.phase}")

    def publish_state_snapshot(self) -> None:
        payload = {
            "mission_id": self.state.mission_id,
            "mission_mode": self.state.mission_mode,
            "phase": self.state.phase,
            "running": self.state.running,
            "active_gap": self.state.active_gap,
            "pending_targets": list(self.state.target_queue),
            "completed_targets": list(self.state.completed_targets),
            "robot_x": round(self.state.robot_x, 3),
            "head_z": round(self.state.head_z, 3),
            "return_requested": self.state.return_requested,
        }
        msg = String()
        msg.data = json.dumps(payload, ensure_ascii=True)
        self.state_pub.publish(msg)

    def enter_phase(self, phase: str) -> None:
        self.state.phase = phase
        self.state.phase_start_time = self.get_clock().now().nanoseconds / 1e9
        self.publish_phase()
        self.publish_state_snapshot()


def main() -> None:
    rclpy.init()
    node = AtomizerDemoSequenceNode()
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
