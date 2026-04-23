"""Visualizador del stack real sobre el world de Gazebo."""

from __future__ import annotations

import json
import re
from dataclasses import dataclass

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

from atm_interfaces.msg import MasterStatus, MissionEvent, MissionState, SlaveStatus


@dataclass
class VisualState:
    robot_x: float
    target_x: float
    tube_z: float
    target_tube_z: float
    reel_angle: float = 0.0
    reel_velocity: float = 0.0
    red_deadline: float = 0.0
    yellow_deadline: float = 0.0
    green_deadline: float = 0.0
    degraded_deadline: float = 0.0
    pump_enabled: bool = False
    valve_active: bool = False
    ready_on: bool = False
    degraded_on: bool = False
    alert_on: bool = False
    master_state: str = "IDLE"
    slave_state: str = "AT_BASE"
    current_gap: int = 0
    current_line_id: str = ""


class RealStackVisualizerNode(Node):
    """Observa los topics del stack real y los transforma en una escena simulada."""

    GAP_PATTERN = re.compile(r"gap[_-](\d+)[_-](\d+)")
    INT_PATTERN = re.compile(r"(\d+)")

    def __init__(self) -> None:
        super().__init__("real_stack_visualizer")

        self.declare_parameter("update_period_sec", 0.1)
        self.declare_parameter("base_x", 5.5)
        self.declare_parameter("gap_positions", [-3.0, -1.0, 1.0, 3.0])
        self.declare_parameter("robot_speed_mps", 0.9)
        self.declare_parameter("tube_upper_z", 2.55)
        self.declare_parameter("tube_lower_z", 1.55)
        self.declare_parameter("tube_speed_mps", 0.7)
        self.declare_parameter("lora_pulse_sec", 0.3)
        self.declare_parameter("degraded_indicator_sec", 0.8)
        self.declare_parameter("reel_angular_speed", 0.35)

        self.update_period = float(self.get_parameter("update_period_sec").value)
        self.base_x = float(self.get_parameter("base_x").value)
        self.gap_positions = [float(v) for v in self.get_parameter("gap_positions").value]
        self.robot_speed = float(self.get_parameter("robot_speed_mps").value)
        self.tube_upper_z = float(self.get_parameter("tube_upper_z").value)
        self.tube_lower_z = float(self.get_parameter("tube_lower_z").value)
        self.tube_speed = float(self.get_parameter("tube_speed_mps").value)
        self.lora_pulse = float(self.get_parameter("lora_pulse_sec").value)
        self.degraded_indicator_sec = float(self.get_parameter("degraded_indicator_sec").value)
        self.reel_angular_speed = float(self.get_parameter("reel_angular_speed").value)

        self.state = VisualState(
            robot_x=self.base_x,
            target_x=self.base_x,
            tube_z=self.tube_upper_z,
            target_tube_z=self.tube_upper_z,
        )

        self.scene_pub = self.create_publisher(String, "sim/scene/state", 20)
        self.stack_pub = self.create_publisher(String, "sim/stack/state", 20)

        self.create_subscription(MissionState, "mission/state", self.handle_mission_state, 20)
        self.create_subscription(SlaveStatus, "slave/status", self.handle_slave_status, 20)
        self.create_subscription(MasterStatus, "master/status", self.handle_master_status, 20)
        self.create_subscription(MasterStatus, "master/reel_status", self.handle_reel_status, 20)
        self.create_subscription(MissionEvent, "link/diagnostics", self.handle_link_diag, 50)
        self.create_subscription(MissionEvent, "mission/events", self.handle_mission_event, 50)

        self.create_timer(self.update_period, self.update_scene)
        self.create_timer(0.25, self.publish_stack_state)

        self.get_logger().info("Visualizador del stack real listo.")

    def now(self) -> float:
        return self.get_clock().now().nanoseconds / 1e9

    def handle_mission_state(self, msg: MissionState) -> None:
        self.state.master_state = msg.state
        if msg.current_stop_index > 0:
            self.state.current_gap = int(msg.current_stop_index)
        if msg.current_line_id:
            self.state.current_line_id = msg.current_line_id

        self.state.ready_on = msg.state in {"READY", "MISSION_LOADED", "EXECUTING", "RETURNING_HOME", "COMPLETED"}
        self.state.degraded_on = msg.state == "DEGRADED_COMMS"
        self.state.alert_on = msg.state in {"FAULT", "EMERGENCY_STOP"}

    def handle_slave_status(self, msg: SlaveStatus) -> None:
        self.state.slave_state = msg.state
        if msg.current_stop_index > 0:
            self.state.current_gap = int(msg.current_stop_index)
        if msg.current_line_id:
            self.state.current_line_id = msg.current_line_id

        if msg.at_base or msg.state == "AT_BASE":
            self.state.target_x = self.base_x
        else:
            self.state.target_x = self.resolve_target_x(msg.current_stop_index, msg.current_line_id)

        if msg.state == "LOWERING_ATOMIZER":
            self.state.target_tube_z = self.tube_lower_z
        elif msg.state == "SPRAYING_ASCENT":
            self.state.target_tube_z = self.tube_upper_z
        elif msg.atomizer_down:
            self.state.target_tube_z = self.tube_lower_z
        else:
            self.state.target_tube_z = self.tube_upper_z

        self.state.valve_active = msg.state in {"LOWERING_ATOMIZER", "SPRAYING_ASCENT"}

    def handle_master_status(self, msg: MasterStatus) -> None:
        self.state.pump_enabled = bool(msg.pump_enabled)
        self.state.ready_on = self.state.ready_on or bool(msg.system_armed)

    def handle_reel_status(self, msg: MasterStatus) -> None:
        mode, speed = self.parse_reel_state(msg.reel_state)
        if mode == "UNROLL":
            self.state.reel_velocity = speed * self.reel_angular_speed
        elif mode == "ROLL":
            self.state.reel_velocity = -speed * self.reel_angular_speed
        else:
            self.state.reel_velocity = 0.0

    def handle_link_diag(self, msg: MissionEvent) -> None:
        event_type = msg.event_type
        source = msg.source
        now = self.now()
        if source == "master_lora_bridge" and event_type in {"link_tx_critical", "link_retry"}:
            self.state.red_deadline = now + self.lora_pulse
        elif source == "slave_lora_bridge" and event_type in {"link_tx_critical", "link_retry"}:
            self.state.yellow_deadline = now + self.lora_pulse

        if event_type in {"link_ack_tx", "link_ack_received", "link_rx_critical", "link_duplicate_rx"}:
            self.state.green_deadline = now + self.lora_pulse
        if event_type == "link_ack_timeout":
            self.state.degraded_deadline = now + self.degraded_indicator_sec

    def handle_mission_event(self, msg: MissionEvent) -> None:
        if msg.event_type in {"pump_on_request", "pump_on_ack", "pump_off_request", "pump_off_ack"}:
            self.state.green_deadline = self.now() + self.lora_pulse
        if msg.event_type in {"fault_detected", "emergency_stop"}:
            self.state.alert_on = True
        if msg.event_type == "link_degraded":
            self.state.degraded_deadline = self.now() + self.degraded_indicator_sec

    def resolve_target_x(self, stop_index: int, current_line_id: str) -> float:
        if 1 <= int(stop_index) <= len(self.gap_positions):
            return self.gap_positions[int(stop_index) - 1]

        if current_line_id:
            gap_match = self.GAP_PATTERN.search(current_line_id)
            if gap_match:
                first = int(gap_match.group(1))
                gap_index = max(1, min(len(self.gap_positions), first))
                return self.gap_positions[gap_index - 1]

            numbers = [int(token) for token in self.INT_PATTERN.findall(current_line_id)]
            if len(numbers) >= 2:
                gap_index = max(1, min(len(self.gap_positions), min(numbers)))
                return self.gap_positions[gap_index - 1]

        return self.base_x

    @staticmethod
    def parse_reel_state(reel_state: str) -> tuple[str, float]:
        if not reel_state:
            return "STOP", 0.0
        parts = reel_state.split(":", 1)
        mode = parts[0].strip().upper()
        try:
            speed = float(parts[1]) if len(parts) > 1 else 0.0
        except ValueError:
            speed = 0.0
        return mode, abs(speed)

    def step_value(self, current: float, target: float, speed: float) -> float:
        delta = target - current
        if abs(delta) <= 0.01:
            return target
        direction = 1.0 if delta > 0.0 else -1.0
        step = direction * speed * self.update_period
        if abs(step) >= abs(delta):
            return target
        return current + step

    def update_scene(self) -> None:
        self.state.robot_x = self.step_value(self.state.robot_x, self.state.target_x, self.robot_speed)
        self.state.tube_z = self.step_value(self.state.tube_z, self.state.target_tube_z, self.tube_speed)
        self.state.reel_angle += self.state.reel_velocity * self.update_period
        self.publish_scene_state()

    def build_scene_payload(self) -> dict[str, object]:
        now = self.now()
        degraded = self.state.degraded_on or (now < self.state.degraded_deadline)
        return {
            "robot_x": round(self.state.robot_x, 4),
            "tube_z": round(self.state.tube_z, 4),
            "reel_angle": round(self.state.reel_angle, 4),
            "red_on": now < self.state.red_deadline,
            "yellow_on": now < self.state.yellow_deadline,
            "green_on": self.state.pump_enabled or (now < self.state.green_deadline),
            "blue_on": self.state.valve_active or self.state.pump_enabled,
            "ready_on": self.state.ready_on,
            "degraded_on": degraded,
            "alert_on": self.state.alert_on,
        }

    def publish_scene_state(self) -> None:
        msg = String()
        msg.data = json.dumps(self.build_scene_payload(), ensure_ascii=True)
        self.scene_pub.publish(msg)

    def publish_stack_state(self) -> None:
        payload = {
            "master_state": self.state.master_state,
            "slave_state": self.state.slave_state,
            "current_gap": self.state.current_gap,
            "current_line_id": self.state.current_line_id,
            "robot_x": round(self.state.robot_x, 3),
            "tube_z": round(self.state.tube_z, 3),
            "pump_enabled": self.state.pump_enabled,
            "valve_active": self.state.valve_active,
            "ready_on": self.state.ready_on,
            "degraded_on": self.state.degraded_on or (self.now() < self.state.degraded_deadline),
            "alert_on": self.state.alert_on,
        }
        msg = String()
        msg.data = json.dumps(payload, ensure_ascii=True)
        self.stack_pub.publish(msg)


def main() -> None:
    rclpy.init()
    node = RealStackVisualizerNode()
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
