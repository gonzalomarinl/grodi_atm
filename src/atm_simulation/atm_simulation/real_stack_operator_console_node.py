"""Consola para ejecutar el stack real sobre el world de simulacion."""

from __future__ import annotations

import threading
import uuid
from queue import Empty, Queue

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from atm_interfaces.action import ExecuteMission
from atm_interfaces.srv import ArmSystem, EmergencyStop, GetSystemState, ResetFault


class RealStackOperatorConsoleNode(Node):
    """Controla el stack real usando las mismas services y actions del robot."""

    GAP_TO_ID = {
        1: "gap_1_2",
        2: "gap_2_3",
        3: "gap_3_4",
        4: "gap_4_5",
    }

    def __init__(self) -> None:
        super().__init__("real_stack_operator_console")

        self.declare_parameter("gap_count", 4)
        self.gap_count = int(self.get_parameter("gap_count").value)

        self.input_queue: Queue[str] = Queue()
        self.awaiting_selective_targets = False
        self._stop_requested = False

        self.latest_stack_state: dict[str, object] = {}

        self.arm_client = self.create_client(ArmSystem, "mission/arm_system")
        self.emergency_client = self.create_client(EmergencyStop, "mission/emergency_stop")
        self.reset_client = self.create_client(ResetFault, "mission/reset_fault")
        self.state_client = self.create_client(GetSystemState, "mission/get_system_state")
        self.execute_client = ActionClient(self, ExecuteMission, "mission/execute")

        self.input_thread = threading.Thread(target=self.console_loop, daemon=True)
        self.input_thread.start()

        self.print_banner()
        self.print_menu()
        self.get_logger().info("Consola del stack real lista.")

    def console_loop(self) -> None:
        while not self._stop_requested:
            try:
                user_input = input().strip()
            except EOFError:
                self.input_queue.put("q")
                return
            self.input_queue.put(user_input)

    def process_once(self) -> None:
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

        lowered = option.lower()
        if lowered in {"g", "general", "1"}:
            self.launch_general_mission()
        elif lowered in {"s", "selectiva", "2"}:
            self.awaiting_selective_targets = True
            print(f"Indica los huecos objetivo separados por comas [1-{self.gap_count}]:")
            self.print_prompt()
        elif lowered in {"e", "estado", "3"}:
            self.fetch_system_state()
        elif lowered in {"x", "emergency", "4"}:
            self.send_emergency_stop()
        elif lowered in {"r", "reset", "5"}:
            self.reset_fault()
        elif lowered in {"q", "salir", "0"}:
            self.shutdown_console()
            return
        else:
            print("Opcion no valida. Usa g, s, e, x, r o q.")

        if not self._stop_requested:
            self.print_menu()

    def launch_general_mission(self) -> None:
        gap_ids = [self.GAP_TO_ID[index] for index in range(1, self.gap_count + 1)]
        self.send_execute_goal(
            mission_type="GENERAL_STOP_MISSION",
            gap_ids=gap_ids,
            stop_indices=list(range(1, self.gap_count + 1)),
        )

    def consume_selective_targets(self, raw: str) -> None:
        self.awaiting_selective_targets = False
        selected: list[int] = []
        for chunk in raw.split(","):
            item = chunk.strip()
            if not item:
                continue
            try:
                gap = int(item)
            except ValueError:
                continue
            if 1 <= gap <= self.gap_count and gap not in selected:
                selected.append(gap)

        if not selected:
            print("No se ha indicado ningun hueco valido.")
            return

        gap_ids = [self.GAP_TO_ID[index] for index in selected]
        self.send_execute_goal(
            mission_type="SELECTIVE_LINE_MISSION",
            gap_ids=gap_ids,
            stop_indices=selected,
        )

    def ensure_arm(self) -> bool:
        if not self.arm_client.wait_for_service(timeout_sec=2.0):
            print("No se encontro el servicio mission/arm_system.")
            return False
        request = ArmSystem.Request()
        request.arm = True
        future = self.arm_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
        if future.result() is None:
            print("No se pudo armar el sistema.")
            return False
        response = future.result()
        print(f"[ARM] {response.message}")
        return bool(response.success)

    def send_execute_goal(self, mission_type: str, gap_ids: list[str], stop_indices: list[int]) -> None:
        if not self.ensure_arm():
            return
        if not self.execute_client.wait_for_server(timeout_sec=3.0):
            print("La accion mission/execute no esta disponible.")
            return

        goal = ExecuteMission.Goal()
        goal.mission_id = f"simstack_{uuid.uuid4().hex[:8]}"
        goal.mission_type = mission_type
        goal.line_ids = gap_ids
        goal.target_line_ids = []
        goal.stop_indices = stop_indices

        future = self.execute_client.send_goal_async(goal, feedback_callback=self.handle_feedback)
        rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
        goal_handle = future.result()
        if goal_handle is None or not goal_handle.accepted:
            print("La maestra ha rechazado la mision.")
            return

        print(f"Mision {goal.mission_id} aceptada con objetivos {gap_ids}.")
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.handle_result)

    def handle_feedback(self, feedback_msg) -> None:
        feedback = feedback_msg.feedback
        print(
            f"\n[FEEDBACK] fase={feedback.current_phase} "
            f"stop={feedback.current_stop_index} target={feedback.current_line_id}"
        )
        self.print_prompt()

    def handle_result(self, future) -> None:
        try:
            wrapped = future.result()
        except Exception as exc:  # pragma: no cover - feedback async
            print(f"\n[RESULT] error recibiendo resultado: {exc}")
            self.print_prompt()
            return

        result = wrapped.result
        print(
            f"\n[RESULT] success={result.success} final_state={result.final_state} "
            f"message={result.message}"
        )
        self.print_prompt()

    def fetch_system_state(self) -> None:
        if not self.state_client.wait_for_service(timeout_sec=2.0):
            print("No se encontro el servicio mission/get_system_state.")
            return
        request = GetSystemState.Request()
        request.verbose = True
        future = self.state_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
        response = future.result()
        if response is None:
            print("No se pudo obtener el estado del sistema.")
            return
        print(
            f"[STATE] master={response.master_state} slave={response.slave_state} "
            f"mission={response.mission_id} detail={response.detail}"
        )

    def send_emergency_stop(self) -> None:
        if not self.emergency_client.wait_for_service(timeout_sec=2.0):
            print("No se encontro el servicio mission/emergency_stop.")
            return
        request = EmergencyStop.Request()
        request.source = "sim_console"
        request.reason = "Parada solicitada desde simulacion"
        future = self.emergency_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
        response = future.result()
        if response is None:
            print("No se pudo enviar la parada de emergencia.")
            return
        print(f"[EMERGENCY] {response.message}")

    def reset_fault(self) -> None:
        if not self.reset_client.wait_for_service(timeout_sec=2.0):
            print("No se encontro el servicio mission/reset_fault.")
            return
        request = ResetFault.Request()
        request.source = "sim_console"
        request.reason = "Reset desde simulacion"
        future = self.reset_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
        response = future.result()
        if response is None:
            print("No se pudo resetear el fallo.")
            return
        print(f"[RESET] {response.message}")

    def print_banner(self) -> None:
        print("\n=== Simulacion conectada al stack real ===")
        print("Usa las mismas services y action que el robot real.")

    def print_menu(self) -> None:
        print("\nOpciones disponibles:")
        print("  g  -> mision general real")
        print("  s  -> mision selectiva real")
        print("  e  -> estado del sistema")
        print("  x  -> parada de emergencia")
        print("  r  -> reset fault")
        print("  q  -> salir")
        self.print_prompt()

    @staticmethod
    def print_prompt() -> None:
        print("> ", end="", flush=True)

    def shutdown_console(self) -> None:
        self._stop_requested = True
        print("Cerrando consola del stack real.")
        self.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


def main() -> None:
    rclpy.init()
    node = RealStackOperatorConsoleNode()
    timer = node.create_timer(0.2, node.process_once)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        timer.cancel()
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()


if __name__ == "__main__":
    main()
