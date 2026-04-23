"""Consola interactiva de la simulacion con seleccion de mision y modo de prueba."""

from __future__ import annotations

import json
import threading
import uuid
from queue import Empty, Queue

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


MODE_ALIASES = {
    "n": "NORMAL",
    "normal": "NORMAL",
    "r": "RETRY_LORA",
    "retry": "RETRY_LORA",
    "retry_lora": "RETRY_LORA",
    "d": "LINK_DEGRADED",
    "degraded": "LINK_DEGRADED",
    "link_degraded": "LINK_DEGRADED",
    "x": "EMERGENCY_STOP",
    "emergency": "EMERGENCY_STOP",
    "emergency_stop": "EMERGENCY_STOP",
    "f": "ACTUATION_FAULT",
    "fault": "ACTUATION_FAULT",
    "actuation_fault": "ACTUATION_FAULT",
}


class AtomizerOperatorConsoleNode(Node):
    """Permite lanzar la simulacion como mision general o selectiva con distintos casos."""

    def __init__(self) -> None:
        super().__init__("atomizer_operator_console")

        self.declare_parameter("gap_count", 4)

        self.gap_count = int(self.get_parameter("gap_count").value)
        self.input_queue: Queue[str] = Queue()
        self.latest_state: dict[str, object] = {}
        self.mission_running = False
        self._stop_requested = False

        self.awaiting_selective_targets = False
        self.awaiting_test_mode = False
        self.pending_request: dict[str, object] | None = None

        self.request_pub = self.create_publisher(String, "sim/mission/request", 10)
        self.create_subscription(String, "sim/mission/state", self.handle_state, 20)
        self.create_subscription(String, "sim/mission/event", self.handle_event, 20)

        self.create_timer(0.2, self.process_input_queue)

        self.input_thread = threading.Thread(target=self.console_loop, daemon=True)
        self.input_thread.start()

        self.print_banner()
        self.print_menu()
        self.get_logger().info("Consola de simulacion preparada para casos nominales y de prueba.")

    def handle_state(self, msg: String) -> None:
        try:
            self.latest_state = json.loads(msg.data)
        except json.JSONDecodeError:
            self.latest_state = {}
            return
        self.mission_running = bool(self.latest_state.get("running", False))

    def handle_event(self, msg: String) -> None:
        print(f"\n[SIM] {msg.data}")
        if not self._stop_requested:
            self.print_prompt()

    def console_loop(self) -> None:
        while not self._stop_requested:
            try:
                user_input = input().strip()
            except EOFError:
                self.input_queue.put("q")
                return
            self.input_queue.put(user_input)

    def process_input_queue(self) -> None:
        try:
            while True:
                option = self.input_queue.get_nowait()
                self.handle_option(option)
        except Empty:
            return

    def handle_option(self, option: str) -> None:
        if self.awaiting_selective_targets:
            self.consume_selective_targets(option)
            return

        if self.awaiting_test_mode:
            self.consume_test_mode(option)
            return

        lowered = option.lower()
        if lowered in {"g", "general", "1"}:
            self.start_general_mission()
        elif lowered in {"s", "selectiva", "2"}:
            self.start_selective_mission()
        elif lowered in {"e", "estado", "3"}:
            self.print_status()
        elif lowered in {"q", "salir", "0"}:
            self.shutdown_console()
            return
        else:
            print("Opcion no valida. Usa g, s, e o q.")

        if not self._stop_requested:
            self.print_menu()

    def start_general_mission(self) -> None:
        if self.mission_running:
            print("Ya hay una mision en curso.")
            return

        self.pending_request = {
            "command": "start",
            "mission_id": f"general_{uuid.uuid4().hex[:8]}",
            "mission_mode": "GENERAL",
            "targets": list(range(1, self.gap_count + 1)),
        }
        self.awaiting_test_mode = True
        print("Has elegido mision general.")
        self.print_test_mode_prompt()

    def start_selective_mission(self) -> None:
        if self.mission_running:
            print("Ya hay una mision en curso.")
            return

        self.awaiting_selective_targets = True
        print(f"Indica ahora los huecos objetivo separados por comas [1-{self.gap_count}]:")
        self.print_prompt()

    def consume_selective_targets(self, raw: str) -> None:
        self.awaiting_selective_targets = False

        targets: list[int] = []
        for chunk in raw.split(","):
            item = chunk.strip()
            if not item:
                continue
            try:
                gap_value = int(item)
            except ValueError:
                continue
            if 1 <= gap_value <= self.gap_count and gap_value not in targets:
                targets.append(gap_value)

        if not targets:
            print("No se ha indicado ningun hueco valido.")
            return

        self.pending_request = {
            "command": "start",
            "mission_id": f"selective_{uuid.uuid4().hex[:8]}",
            "mission_mode": "SELECTIVE",
            "targets": targets,
        }
        self.awaiting_test_mode = True
        print(f"Has elegido mision selectiva para los huecos {targets}.")
        self.print_test_mode_prompt()

    def consume_test_mode(self, raw: str) -> None:
        self.awaiting_test_mode = False
        selected = MODE_ALIASES.get(raw.strip().lower(), "NORMAL")

        if self.pending_request is None:
            print("No habia ninguna peticion pendiente.")
            return

        payload = dict(self.pending_request)
        payload["test_mode"] = selected
        self.pending_request = None
        self.publish_request(payload)
        print(
            f"Mision enviada: modo {payload['mission_mode']} con prueba {selected} "
            f"y huecos {payload['targets']}."
        )

    def print_status(self) -> None:
        if not self.latest_state:
            print("Todavia no hay estado publicado por la simulacion.")
            return

        print("Estado actual:")
        print(f"  mision: {self.latest_state.get('mission_id', '')}")
        print(f"  modo: {self.latest_state.get('mission_mode', '')}")
        print(f"  prueba: {self.latest_state.get('test_mode', '')}")
        print(f"  fase: {self.latest_state.get('phase', '')}")
        print(f"  activo: {self.latest_state.get('running', False)}")
        print(f"  maestra: {self.latest_state.get('master_state', '')}")
        print(f"  esclava: {self.latest_state.get('slave_state', '')}")
        print(f"  hueco activo: {self.latest_state.get('active_gap', 0)}")
        print(f"  pendientes: {self.latest_state.get('pending_targets', [])}")
        print(f"  completados: {self.latest_state.get('completed_targets', [])}")
        print(f"  robot_x: {self.latest_state.get('robot_x', 0.0)}")
        print(f"  tube_z: {self.latest_state.get('tube_z', 0.0)}")
        print(f"  electovalvula: {self.latest_state.get('valve_active', False)}")
        print(f"  bomba: {self.latest_state.get('pump_active', False)}")

    def publish_request(self, payload: dict[str, object]) -> None:
        msg = String()
        msg.data = json.dumps(payload, ensure_ascii=True)
        self.request_pub.publish(msg)

    def print_banner(self) -> None:
        print("\n=== Simulacion del atomizador ===")
        print("La secuencia sigue la logica maestra-esclava y permite forzar casos de prueba.")

    def print_menu(self) -> None:
        print("\nOpciones disponibles:")
        print("  g  -> mision general")
        print("  s  -> mision selectiva")
        print("  e  -> mostrar estado")
        print("  q  -> salir")
        self.print_prompt()

    def print_test_mode_prompt(self) -> None:
        print("Elige caso de prueba:")
        print("  n  -> normal")
        print("  r  -> retry_lora")
        print("  d  -> link_degraded")
        print("  x  -> emergency_stop")
        print("  f  -> actuation_fault")
        self.print_prompt()

    @staticmethod
    def print_prompt() -> None:
        print("> ", end="", flush=True)

    def shutdown_console(self) -> None:
        self._stop_requested = True
        print("Cerrando consola de simulacion.")
        self.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


def main() -> None:
    rclpy.init()
    node = AtomizerOperatorConsoleNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()


if __name__ == "__main__":
    main()
