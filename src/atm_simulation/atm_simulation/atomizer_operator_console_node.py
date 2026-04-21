"""Consola interactiva por teclado para controlar la simulación del atomizador."""

from __future__ import annotations

import json
import threading
import uuid
from queue import Empty, Queue

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class AtomizerOperatorConsoleNode(Node):
    """Permite lanzar misiones simuladas desde teclado como si fuera el agricultor."""

    def __init__(self) -> None:
        super().__init__("atomizer_operator_console")

        self.declare_parameter("line_count", 5)
        self.declare_parameter("gap_count", 4)

        self.line_count = int(self.get_parameter("line_count").value)
        self.gap_count = int(self.get_parameter("gap_count").value)
        self.input_queue: Queue[str] = Queue()
        self.latest_phase = "IDLE"
        self.latest_summary = "IDLE"
        self.latest_state = {}
        self._stop_requested = False

        self.command_pub = self.create_publisher(String, "sim/demo/command", 10)
        self.create_subscription(String, "sim/demo/phase", self.handle_phase, 20)
        self.create_subscription(String, "sim/status/summary", self.handle_summary, 20)
        self.create_subscription(String, "sim/demo/state", self.handle_state, 20)

        self.create_timer(0.2, self.process_input_queue)

        self.input_thread = threading.Thread(target=self.console_loop, daemon=True)
        self.input_thread.start()
        self.print_menu()
        self.get_logger().info("Consola interactiva lista.")

    def handle_phase(self, msg: String) -> None:
        if msg.data != self.latest_phase:
            self.latest_phase = msg.data
            print(f"\n[FASE] {self.latest_phase}")

    def handle_summary(self, msg: String) -> None:
        if msg.data != self.latest_summary:
            self.latest_summary = msg.data
            print(f"[SIM] {self.latest_summary}")

    def handle_state(self, msg: String) -> None:
        try:
            self.latest_state = json.loads(msg.data)
        except json.JSONDecodeError:
            self.latest_state = {}

    def console_loop(self) -> None:
        while not self._stop_requested:
            try:
                user_input = input("\nSelecciona opción: ").strip()
            except EOFError:
                self.input_queue.put("0")
                return
            self.input_queue.put(user_input)

    def process_input_queue(self) -> None:
        try:
            while True:
                user_input = self.input_queue.get_nowait()
                self.handle_menu_option(user_input)
        except Empty:
            return

    def handle_menu_option(self, option: str) -> None:
        if option == "1":
            self.launch_general_mission()
        elif option == "2":
            self.launch_selective_gap_mission()
        elif option == "3":
            self.launch_selective_line_mission()
        elif option == "4":
            self.publish_command({"command": "return_home"})
            print("Retorno a base solicitado.")
        elif option == "5":
            self.publish_command({"command": "status"})
            self.print_status()
        elif option == "6":
            self.publish_command({"command": "reset_idle"})
            print("Reset manual a IDLE solicitado.")
        elif option == "0":
            self._stop_requested = True
            print("Saliendo de la consola interactiva.")
            self.destroy_node()
            if rclpy.ok():
                rclpy.shutdown()
        else:
            print("Opción no válida.")
        if not self._stop_requested:
            self.print_menu()

    def launch_general_mission(self) -> None:
        confirm = input("¿Deseas actuar en todos los huecos? (s/n): ").strip().lower()
        if confirm != "s":
            print("Misión descartada por el operador.")
            return

        mission_id = f"general_{uuid.uuid4().hex[:8]}"
        targets = list(range(1, self.gap_count + 1))
        self.publish_command(
            {
                "command": "run_mission",
                "mission_id": mission_id,
                "mission_mode": "GENERAL",
                "targets": targets,
            }
        )
        print(f"Misión general {mission_id} enviada con objetivos {targets}.")

    def launch_selective_gap_mission(self) -> None:
        confirm = input("¿Deseas actuar de forma selectiva por hueco? (s/n): ").strip().lower()
        if confirm != "s":
            print("Misión selectiva cancelada.")
            return

        gap_id = input(f"Indica el hueco objetivo [1-{self.gap_count}]: ").strip()
        try:
            gap_value = int(gap_id)
        except ValueError:
            print("Hueco no válido.")
            return
        if not 1 <= gap_value <= self.gap_count:
            print("Hueco fuera de rango.")
            return

        mission_id = f"selective_gap_{uuid.uuid4().hex[:8]}"
        self.publish_command(
            {
                "command": "run_mission",
                "mission_id": mission_id,
                "mission_mode": "SELECTIVE_GAP",
                "targets": [gap_value],
            }
        )
        print(f"Misión selectiva {mission_id} enviada al hueco {gap_value}.")

    def launch_selective_line_mission(self) -> None:
        confirm = input("¿Deseas actuar por anomalía en un líneo concreto? (s/n): ").strip().lower()
        if confirm != "s":
            print("Misión por líneo cancelada.")
            return

        line_id = input(f"Indica el líneo objetivo [1-{self.line_count}]: ").strip()
        try:
            line_value = int(line_id)
        except ValueError:
            print("Líneo no válido.")
            return
        if not 1 <= line_value <= self.line_count:
            print("Líneo fuera de rango.")
            return

        gap_value = max(1, min(self.gap_count, line_value - 1))
        mission_id = f"selective_line_{uuid.uuid4().hex[:8]}"
        self.publish_command(
            {
                "command": "run_mission",
                "mission_id": mission_id,
                "mission_mode": "SELECTIVE_LINE",
                "targets": [gap_value],
            }
        )
        print(
            f"Misión selectiva {mission_id} enviada para el líneo {line_value}. "
            f"Se actuará en el hueco {gap_value}."
        )

    def print_status(self) -> None:
        if not self.latest_state:
            print("Todavía no hay estado publicado por la simulación.")
            return

        print("Estado actual de la simulación:")
        print(f"  misión: {self.latest_state.get('mission_id', '')}")
        print(f"  modo: {self.latest_state.get('mission_mode', '')}")
        print(f"  fase: {self.latest_state.get('phase', '')}")
        print(f"  activo: {self.latest_state.get('running', False)}")
        print(f"  hueco activo: {self.latest_state.get('active_gap', 0)}")
        print(f"  pendientes: {self.latest_state.get('pending_targets', [])}")
        print(f"  completados: {self.latest_state.get('completed_targets', [])}")
        print(f"  robot_x: {self.latest_state.get('robot_x', 0.0)}")
        print(f"  head_z: {self.latest_state.get('head_z', 0.0)}")
        print(f"  retorno solicitado: {self.latest_state.get('return_requested', False)}")

    def publish_command(self, payload: dict) -> None:
        msg = String()
        msg.data = json.dumps(payload, ensure_ascii=True)
        self.command_pub.publish(msg)

    def print_menu(self) -> None:
        print("\n=== Consola de simulación del atomizador ===")
        print("1. Lanzar misión general (todos los huecos)")
        print("2. Lanzar misión selectiva por hueco")
        print("3. Lanzar misión selectiva por líneo")
        print("4. Solicitar vuelta a base")
        print("5. Mostrar estado actual")
        print("6. Reset manual a IDLE")
        print("0. Salir")


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
