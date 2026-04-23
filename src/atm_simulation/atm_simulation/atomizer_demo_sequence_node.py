"""Secuencia de mision de la simulacion, alineada con la logica real del sistema."""

from __future__ import annotations

import json
import uuid
from dataclasses import dataclass, field

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


VALID_TEST_MODES = {
    "NORMAL",
    "RETRY_LORA",
    "LINK_DEGRADED",
    "EMERGENCY_STOP",
    "ACTUATION_FAULT",
}


@dataclass
class SimulationState:
    mission_id: str = ""
    mission_mode: str = ""
    test_mode: str = "NORMAL"
    phase: str = "IDLE"
    running: bool = False
    robot_x: float = 5.5
    tube_z: float = 2.55
    active_gap: int = 0
    active_gap_x: float = 5.5
    pending_targets: list[int] = field(default_factory=list)
    completed_targets: list[int] = field(default_factory=list)
    valve_active: bool = False
    pump_active: bool = False
    master_state: str = "IDLE"
    slave_state: str = "AT_BASE"


class AtomizerDemoSequenceNode(Node):
    """Orquesta la mision simulada con modos nominales y de prueba."""

    def __init__(self) -> None:
        super().__init__("atomizer_demo_sequence")

        self.declare_parameter("autostart_general", False)
        self.declare_parameter("update_period_sec", 0.1)
        self.declare_parameter("base_x", 5.5)
        self.declare_parameter("gap_positions", [-3.0, -1.0, 1.0, 3.0])
        self.declare_parameter("travel_speed_mps", 0.8)
        self.declare_parameter("tube_upper_z", 2.55)
        self.declare_parameter("tube_lower_z", 1.55)
        self.declare_parameter("lower_speed_mps", 0.55)
        self.declare_parameter("raise_speed_mps", 0.55)
        self.declare_parameter("lora_send_pulse_sec", 0.35)
        self.declare_parameter("lora_receive_pulse_sec", 0.25)
        self.declare_parameter("command_delay_sec", 0.2)
        self.declare_parameter("complete_pause_sec", 0.5)
        self.declare_parameter("pump_shutdown_margin_sec", 1.0)
        self.declare_parameter("retry_backoff_sec", 0.7)
        self.declare_parameter("degraded_hold_sec", 1.2)
        self.declare_parameter("fault_hold_sec", 1.0)
        self.declare_parameter("emergency_visual_sec", 1.0)

        self.autostart_general = bool(self.get_parameter("autostart_general").value)
        self.update_period = float(self.get_parameter("update_period_sec").value)
        self.base_x = float(self.get_parameter("base_x").value)
        self.gap_positions = [float(value) for value in self.get_parameter("gap_positions").value]
        self.travel_speed = float(self.get_parameter("travel_speed_mps").value)
        self.tube_upper_z = float(self.get_parameter("tube_upper_z").value)
        self.tube_lower_z = float(self.get_parameter("tube_lower_z").value)
        self.lower_speed = float(self.get_parameter("lower_speed_mps").value)
        self.raise_speed = float(self.get_parameter("raise_speed_mps").value)
        self.lora_send_pulse = float(self.get_parameter("lora_send_pulse_sec").value)
        self.lora_receive_pulse = float(self.get_parameter("lora_receive_pulse_sec").value)
        self.command_delay = float(self.get_parameter("command_delay_sec").value)
        self.complete_pause = float(self.get_parameter("complete_pause_sec").value)
        self.pump_shutdown_margin = float(self.get_parameter("pump_shutdown_margin_sec").value)
        self.retry_backoff = float(self.get_parameter("retry_backoff_sec").value)
        self.degraded_hold = float(self.get_parameter("degraded_hold_sec").value)
        self.fault_hold = float(self.get_parameter("fault_hold_sec").value)
        self.emergency_visual = float(self.get_parameter("emergency_visual_sec").value)

        self.state = SimulationState(robot_x=self.base_x, tube_z=self.tube_upper_z)
        self.phase_deadline = 0.0
        self.phase_started = 0.0

        self.red_led_deadline = 0.0
        self.yellow_led_deadline = 0.0
        self.green_led_deadline = 0.0
        self.blue_led_deadline = 0.0
        self.all_leds_deadline = 0.0
        self.degraded_signal_deadline = 0.0

        self.retry_injected = False
        self.degraded_injected = False
        self.emergency_injected = False
        self.fault_injected = False

        self.scene_pub = self.create_publisher(String, "sim/scene/state", 20)
        self.state_pub = self.create_publisher(String, "sim/mission/state", 20)
        self.event_pub = self.create_publisher(String, "sim/mission/event", 20)
        self.create_subscription(String, "sim/mission/request", self.handle_mission_request, 20)

        self.create_timer(self.update_period, self.control_loop)
        self.create_timer(0.25, self.publish_state_snapshot)

        if self.autostart_general:
            self.create_timer(1.5, self.autostart_once)

        self.get_logger().info("Secuencia de simulacion reiniciada y alineada con la maquina real.")

    def autostart_once(self) -> None:
        if self.state.running or self.state.phase != "IDLE":
            return
        self.start_mission(
            mission_mode="GENERAL",
            targets=list(range(1, len(self.gap_positions) + 1)),
            mission_id="demo_general",
            test_mode="NORMAL",
        )

    def now(self) -> float:
        return self.get_clock().now().nanoseconds / 1e9

    def handle_mission_request(self, msg: String) -> None:
        try:
            payload = json.loads(msg.data)
        except json.JSONDecodeError as exc:
            self.publish_event(f"Peticion de mision invalida: {exc}")
            return

        command = str(payload.get("command", "start")).strip().lower()
        if command != "start":
            self.publish_event(f"Comando de simulacion no soportado: {command}")
            return

        if self.state.running:
            self.publish_event("Ya hay una mision en ejecucion. Espera a que termine.")
            return

        mission_mode = str(payload.get("mission_mode", "GENERAL")).strip().upper()
        requested_targets = [int(value) for value in payload.get("targets", [])]
        mission_id = str(payload.get("mission_id", f"sim_{uuid.uuid4().hex[:8]}"))
        test_mode = str(payload.get("test_mode", "NORMAL")).strip().upper()
        if test_mode not in VALID_TEST_MODES:
            test_mode = "NORMAL"

        targets = self.validate_targets(requested_targets, mission_mode)
        if not targets:
            self.publish_event("No se han recibido huecos validos para la mision.")
            return

        self.start_mission(mission_mode, targets, mission_id, test_mode)

    def validate_targets(self, requested_targets: list[int], mission_mode: str) -> list[int]:
        if mission_mode == "GENERAL":
            return list(range(1, len(self.gap_positions) + 1))

        valid_targets: list[int] = []
        max_gap = len(self.gap_positions)
        for value in requested_targets:
            if 1 <= value <= max_gap and value not in valid_targets:
                valid_targets.append(value)
        return valid_targets

    def start_mission(
        self,
        mission_mode: str,
        targets: list[int],
        mission_id: str,
        test_mode: str,
    ) -> None:
        self.state = SimulationState(
            mission_id=mission_id,
            mission_mode=mission_mode,
            test_mode=test_mode,
            phase="MISSION_SELECTED",
            running=True,
            robot_x=self.base_x,
            tube_z=self.tube_upper_z,
            pending_targets=list(targets),
            master_state="MISSION_LOADED",
            slave_state="AT_BASE",
        )
        self.phase_started = self.now()
        self.phase_deadline = 0.0
        self.reset_visual_deadlines()
        self.retry_injected = False
        self.degraded_injected = False
        self.emergency_injected = False
        self.fault_injected = False

        self.publish_event(
            f"Mision {mission_id} iniciada en modo {mission_mode} con huecos {targets} y prueba {test_mode}."
        )
        self.prepare_next_gap()

    def reset_visual_deadlines(self) -> None:
        self.red_led_deadline = 0.0
        self.yellow_led_deadline = 0.0
        self.green_led_deadline = 0.0
        self.blue_led_deadline = 0.0
        self.all_leds_deadline = 0.0
        self.degraded_signal_deadline = 0.0

    def control_loop(self) -> None:
        now = self.now()

        if self.state.phase == "MOVING_TO_GAP":
            self.step_robot(self.state.active_gap_x, self.travel_speed)
            if abs(self.state.robot_x - self.state.active_gap_x) <= 0.01:
                self.state.robot_x = self.state.active_gap_x
                self.state.slave_state = "STOP_CONFIRMED"
                self.enter_wait_phase("SLAVE_TX_ARRIVAL", self.lora_send_pulse)
            self.publish_scene_state()
            return

        if self.state.phase == "LOWERING_T_TUBE":
            self.step_tube(self.tube_lower_z, self.lower_speed)
            if abs(self.state.tube_z - self.tube_lower_z) <= 0.01:
                self.state.tube_z = self.tube_lower_z
                if self.state.test_mode == "ACTUATION_FAULT" and not self.fault_injected:
                    self.trigger_actuation_fault()
                else:
                    self.enter_wait_phase("MASTER_TX_PUMP_ON", self.lora_send_pulse)
            self.publish_scene_state()
            return

        if self.state.phase == "SPRAY_ASCENT":
            ascent_span = max(0.001, self.tube_upper_z - self.tube_lower_z)
            ascent_progress = (self.state.tube_z - self.tube_lower_z) / ascent_span
            if self.state.test_mode == "EMERGENCY_STOP" and not self.emergency_injected and ascent_progress >= 0.25:
                self.trigger_emergency_stop()
                self.publish_scene_state()
                return

            self.step_tube(self.tube_upper_z, self.raise_speed)
            remaining_distance = max(0.0, self.tube_upper_z - self.state.tube_z)
            if remaining_distance <= self.raise_speed * self.pump_shutdown_margin:
                self.state.pump_active = False
            if abs(self.state.tube_z - self.tube_upper_z) <= 0.01:
                self.state.tube_z = self.tube_upper_z
                self.state.pump_active = False
                self.state.valve_active = False
                self.blue_led_deadline = now
                self.enter_wait_phase("TARGET_COMPLETE", self.complete_pause)
            self.publish_scene_state()
            return

        if self.state.phase == "DEGRADED_HOLD":
            if now >= self.phase_deadline:
                self.state.slave_state = "RETURNING"
                self.enter_phase("RETURNING_TO_BASE")
            self.publish_scene_state()
            return

        if self.state.phase == "FAULT_HOLD":
            if now >= self.phase_deadline:
                self.state.slave_state = "RETURNING"
                self.enter_phase("RETURNING_TO_BASE")
            self.publish_scene_state()
            return

        if self.state.phase == "RETURNING_TO_BASE":
            self.step_robot(self.base_x, self.travel_speed)
            if abs(self.state.robot_x - self.base_x) <= 0.01:
                self.state.robot_x = self.base_x
                self.state.slave_state = "AT_BASE"
                if self.state.master_state not in {"FAULT", "EMERGENCY_STOP", "DEGRADED_COMMS"}:
                    self.state.master_state = "COMPLETED"
                self.enter_phase("COMPLETED")
                self.state.running = False
                self.publish_event(f"Mision {self.state.mission_id} finalizada. Robot en base.")
            self.publish_scene_state()
            return

        if self.phase_deadline and now < self.phase_deadline:
            self.publish_scene_state()
            return

        if self.state.phase == "SLAVE_TX_ARRIVAL":
            if self.state.test_mode == "RETRY_LORA" and not self.retry_injected:
                self.retry_injected = True
                self.pulse_led("yellow", self.lora_send_pulse)
                self.publish_event("Timeout de ACK LoRa en esclava. Reintento del mensaje critico.")
                self.phase_deadline = now + self.retry_backoff
                self.publish_scene_state()
                return
            self.enter_wait_phase("MASTER_RX_ARRIVAL", self.lora_receive_pulse)
        elif self.state.phase == "MASTER_RX_ARRIVAL":
            self.enter_wait_phase("MASTER_TX_VALVE_OPEN", self.lora_send_pulse)
        elif self.state.phase == "MASTER_TX_VALVE_OPEN":
            self.enter_wait_phase("SLAVE_RX_VALVE_OPEN", self.lora_receive_pulse)
        elif self.state.phase == "SLAVE_RX_VALVE_OPEN":
            self.state.valve_active = True
            self.state.slave_state = "LOWERING_ATOMIZER"
            self.enter_phase("LOWERING_T_TUBE")
        elif self.state.phase == "MASTER_TX_PUMP_ON":
            self.enter_wait_phase("SLAVE_RX_PUMP_ON", self.lora_receive_pulse)
        elif self.state.phase == "SLAVE_RX_PUMP_ON":
            self.state.pump_active = True
            self.state.blue_led_deadline = 0.0
            self.state.slave_state = "SPRAYING_ASCENT"
            self.enter_phase("SPRAY_ASCENT")
        elif self.state.phase == "TARGET_COMPLETE":
            if self.state.active_gap not in self.state.completed_targets:
                self.state.completed_targets.append(self.state.active_gap)
            if self.state.test_mode == "LINK_DEGRADED" and not self.degraded_injected and self.state.pending_targets:
                self.trigger_link_degraded()
            elif self.state.pending_targets:
                self.prepare_next_gap()
            else:
                self.enter_wait_phase("MASTER_TX_RETURN_HOME", self.lora_send_pulse)
        elif self.state.phase == "MASTER_TX_RETURN_HOME":
            self.enter_wait_phase("SLAVE_RX_RETURN_HOME", self.lora_receive_pulse)
        elif self.state.phase == "SLAVE_RX_RETURN_HOME":
            self.state.master_state = "RETURNING_HOME"
            self.state.slave_state = "RETURNING"
            self.enter_phase("RETURNING_TO_BASE")

        self.publish_scene_state()

    def trigger_link_degraded(self) -> None:
        self.degraded_injected = True
        self.state.master_state = "DEGRADED_COMMS"
        self.state.valve_active = False
        self.state.pump_active = False
        self.degraded_signal_deadline = self.now() + self.degraded_hold
        self.publish_event("Comunicaciones degradadas: la esclava pierde heartbeat y fuerza retorno autonomo.")
        self.state.phase = "DEGRADED_HOLD"
        self.phase_started = self.now()
        self.phase_deadline = self.phase_started + self.degraded_hold
        self.publish_state_snapshot()

    def trigger_emergency_stop(self) -> None:
        self.emergency_injected = True
        self.state.master_state = "EMERGENCY_STOP"
        self.state.slave_state = "RETURNING"
        self.state.pump_active = False
        self.state.valve_active = False
        until = self.now() + self.emergency_visual
        self.red_led_deadline = until
        self.yellow_led_deadline = until
        self.green_led_deadline = until
        self.blue_led_deadline = until
        self.all_leds_deadline = until
        self.publish_event("Parada de emergencia solicitada por la maestra. Retorno inmediato a base.")
        self.enter_phase("RETURNING_TO_BASE")

    def trigger_actuation_fault(self) -> None:
        self.fault_injected = True
        self.state.master_state = "FAULT"
        self.state.slave_state = "LOCAL_FAULT"
        self.state.pump_active = False
        self.state.valve_active = False
        until = self.now() + self.fault_hold
        self.red_led_deadline = until
        self.publish_event("Fallo de actuacion: no se puede completar el proceso en el hueco actual.")
        self.state.phase = "FAULT_HOLD"
        self.phase_started = self.now()
        self.phase_deadline = until
        self.publish_state_snapshot()

    def prepare_next_gap(self) -> None:
        if not self.state.pending_targets:
            self.enter_wait_phase("MASTER_TX_RETURN_HOME", self.lora_send_pulse)
            return

        self.state.active_gap = self.state.pending_targets.pop(0)
        self.state.active_gap_x = self.gap_positions[self.state.active_gap - 1]
        self.state.valve_active = False
        self.state.pump_active = False
        self.state.master_state = "EXECUTING"
        self.state.slave_state = "MOVING"
        self.enter_phase("MOVING_TO_GAP")
        self.publish_event(
            f"Desplazando el robot al hueco {self.state.active_gap} en x={self.state.active_gap_x:.2f}."
        )

    def enter_phase(self, phase: str) -> None:
        self.state.phase = phase
        self.phase_started = self.now()
        self.phase_deadline = 0.0
        self.on_phase_entry(phase)
        self.publish_state_snapshot()

    def enter_wait_phase(self, phase: str, duration: float) -> None:
        self.state.phase = phase
        self.phase_started = self.now()
        self.phase_deadline = self.phase_started + duration + self.command_delay
        self.on_phase_entry(phase)
        self.publish_state_snapshot()

    def on_phase_entry(self, phase: str) -> None:
        if phase == "SLAVE_TX_ARRIVAL":
            self.pulse_led("yellow", self.lora_send_pulse)
            self.publish_event("Esclava -> maestra: llegada al hueco confirmada.")
        elif phase == "MASTER_RX_ARRIVAL":
            self.pulse_led("green", self.lora_receive_pulse)
            self.publish_event("Maestra recibe la llegada del robot.")
        elif phase == "MASTER_TX_VALVE_OPEN":
            self.pulse_led("red", self.lora_send_pulse)
            self.publish_event("Maestra -> esclava: orden de apertura de electovalvula.")
        elif phase == "SLAVE_RX_VALVE_OPEN":
            self.pulse_led("green", self.lora_receive_pulse)
            self.blue_led_deadline = self.now() + 60.0
            self.publish_event("Esclava recibe la orden de actuacion.")
        elif phase == "LOWERING_T_TUBE":
            self.publish_event("Bajando el tubo en T aproximadamente un metro.")
        elif phase == "MASTER_TX_PUMP_ON":
            self.pulse_led("red", self.lora_send_pulse)
            self.publish_event("Maestra -> esclava: activacion de bomba.")
        elif phase == "SLAVE_RX_PUMP_ON":
            self.pulse_led("green", self.lora_receive_pulse)
            self.publish_event("Esclava recibe la activacion de bomba e inicia el ascenso.")
        elif phase == "SPRAY_ASCENT":
            self.publish_event("Ascenso del tubo en T con bomba activa.")
        elif phase == "TARGET_COMPLETE":
            self.publish_event(f"Hueco {self.state.active_gap} completado.")
        elif phase == "MASTER_TX_RETURN_HOME":
            self.pulse_led("red", self.lora_send_pulse)
            self.publish_event("Maestra -> esclava: retorno a base.")
        elif phase == "SLAVE_RX_RETURN_HOME":
            self.pulse_led("green", self.lora_receive_pulse)
            self.publish_event("Esclava recibe la orden de retorno a base.")
        elif phase == "RETURNING_TO_BASE":
            self.publish_event("Robot regresando a la posicion de base.")
        elif phase == "COMPLETED":
            self.publish_event("Secuencia terminada.")

    def pulse_led(self, color: str, duration: float) -> None:
        deadline = self.now() + duration
        if color == "red":
            self.red_led_deadline = deadline
        elif color == "yellow":
            self.yellow_led_deadline = deadline
        elif color == "green":
            self.green_led_deadline = deadline
        elif color == "blue":
            self.blue_led_deadline = deadline

    def step_robot(self, target_x: float, speed: float) -> None:
        delta = target_x - self.state.robot_x
        if abs(delta) <= 0.01:
            return
        direction = 1.0 if delta > 0.0 else -1.0
        step = direction * speed * self.update_period
        if abs(step) >= abs(delta):
            self.state.robot_x = target_x
        else:
            self.state.robot_x += step

    def step_tube(self, target_z: float, speed: float) -> None:
        delta = target_z - self.state.tube_z
        if abs(delta) <= 0.01:
            return
        direction = 1.0 if delta > 0.0 else -1.0
        step = direction * speed * self.update_period
        if abs(step) >= abs(delta):
            self.state.tube_z = target_z
        else:
            self.state.tube_z += step

    def build_scene_payload(self) -> dict[str, object]:
        now = self.now()
        all_on = now < self.all_leds_deadline
        degraded_on = now < self.degraded_signal_deadline
        return {
            "robot_x": round(self.state.robot_x, 4),
            "tube_z": round(self.state.tube_z, 4),
            "red_on": all_on or degraded_on or now < self.red_led_deadline,
            "yellow_on": all_on or degraded_on or now < self.yellow_led_deadline,
            "green_on": all_on or self.state.pump_active or now < self.green_led_deadline,
            "blue_on": all_on or self.state.valve_active or self.state.pump_active or now < self.blue_led_deadline,
        }

    def publish_scene_state(self) -> None:
        msg = String()
        msg.data = json.dumps(self.build_scene_payload(), ensure_ascii=True)
        self.scene_pub.publish(msg)

    def publish_state_snapshot(self) -> None:
        payload = {
            "mission_id": self.state.mission_id,
            "mission_mode": self.state.mission_mode,
            "test_mode": self.state.test_mode,
            "phase": self.state.phase,
            "running": self.state.running,
            "master_state": self.state.master_state,
            "slave_state": self.state.slave_state,
            "active_gap": self.state.active_gap,
            "pending_targets": list(self.state.pending_targets),
            "completed_targets": list(self.state.completed_targets),
            "robot_x": round(self.state.robot_x, 3),
            "tube_z": round(self.state.tube_z, 3),
            "valve_active": self.state.valve_active,
            "pump_active": self.state.pump_active,
        }
        msg = String()
        msg.data = json.dumps(payload, ensure_ascii=True)
        self.state_pub.publish(msg)

    def publish_event(self, text: str) -> None:
        self.get_logger().info(text)
        msg = String()
        msg.data = text
        self.event_pub.publish(msg)


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
