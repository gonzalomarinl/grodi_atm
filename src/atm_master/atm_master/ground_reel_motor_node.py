"""Controlador del motor de la bobina de suelo."""

from __future__ import annotations

from threading import Lock

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MasterStatus
from atm_interfaces.srv import SetAdmissionReelMode
from atm_master.delta_vfd_modbus import DeltaVfdConfig, DeltaVfdModbusBackend


class GroundReelMotorNode(Node):
    """Gestiona el motor de enrollado y desenrollado de la manguera principal.

    Mantiene la interfaz ya usada por la maestra:
    - servicio ``master/set_admission_reel_mode``;
    - topic ``master/reel_status``.

    En esta fase el backend queda preparado para hardware real, pero funciona en
    modo lógico mediante parámetros y publicación de estado.
    """

    VALID_MODES = {"STOP", "UNROLL", "ROLL"}

    def __init__(self) -> None:
        super().__init__("ground_reel_motor")

        self.declare_parameter("use_mock_backend", True)
        self.declare_parameter("startup_mode", "STOP")
        self.declare_parameter("startup_speed", 0.0)
        self.declare_parameter("status_period_sec", 0.5)
        self.declare_parameter("max_speed", 1.0)
        self.declare_parameter("min_frequency_hz", 5.0)
        self.declare_parameter("max_frequency_hz", 50.0)
        self.declare_parameter("default_unroll_frequency_hz", 35.0)
        self.declare_parameter("default_roll_frequency_hz", 35.0)
        self.declare_parameter("serial_port", "/dev/ttyUSB0")
        self.declare_parameter("baudrate", 9600)
        self.declare_parameter("bytesize", 8)
        self.declare_parameter("parity", "N")
        self.declare_parameter("stopbits", 1)
        self.declare_parameter("slave_id", 1)
        self.declare_parameter("modbus_timeout_sec", 0.3)
        self.declare_parameter("command_settle_sec", 0.05)
        self.declare_parameter("direction_change_stop_sec", 0.2)
        self.declare_parameter("stop_before_reverse", True)
        self.declare_parameter("unroll_direction", "FWD")
        self.declare_parameter("roll_direction", "REV")

        startup_mode = str(self.get_parameter("startup_mode").value).upper()
        self.mode = startup_mode if startup_mode in self.VALID_MODES else "STOP"
        self.speed = max(0.0, float(self.get_parameter("startup_speed").value))
        self.max_speed = max(0.0, float(self.get_parameter("max_speed").value))
        self.min_frequency_hz = max(0.0, float(self.get_parameter("min_frequency_hz").value))
        self.max_frequency_hz = max(self.min_frequency_hz, float(self.get_parameter("max_frequency_hz").value))
        self.default_unroll_frequency_hz = self.clamp_frequency(
            float(self.get_parameter("default_unroll_frequency_hz").value)
        )
        self.default_roll_frequency_hz = self.clamp_frequency(
            float(self.get_parameter("default_roll_frequency_hz").value)
        )
        self.use_mock_backend = bool(self.get_parameter("use_mock_backend").value)
        self.frequency_hz = 0.0
        self.backend_connected = self.use_mock_backend
        self.last_error = ""
        self._lock = Lock()

        self.backend = None
        if not self.use_mock_backend:
            config = DeltaVfdConfig(
                port=str(self.get_parameter("serial_port").value),
                baudrate=int(self.get_parameter("baudrate").value),
                bytesize=int(self.get_parameter("bytesize").value),
                parity=str(self.get_parameter("parity").value),
                stopbits=int(self.get_parameter("stopbits").value),
                slave_id=int(self.get_parameter("slave_id").value),
                timeout_sec=float(self.get_parameter("modbus_timeout_sec").value),
                command_settle_sec=float(self.get_parameter("command_settle_sec").value),
                direction_change_stop_sec=float(self.get_parameter("direction_change_stop_sec").value),
                stop_before_reverse=bool(self.get_parameter("stop_before_reverse").value),
                unroll_direction=str(self.get_parameter("unroll_direction").value),
                roll_direction=str(self.get_parameter("roll_direction").value),
            )
            self.backend = DeltaVfdModbusBackend(config=config, logger=self.get_logger())

        self.status_pub = self.create_publisher(MasterStatus, "master/reel_status", 10)
        self.create_service(
            SetAdmissionReelMode,
            "master/set_admission_reel_mode",
            self.handle_set_mode,
        )
        self.status_timer = self.create_timer(
            float(self.get_parameter("status_period_sec").value),
            self.publish_status,
        )

        backend_name = "mock" if self.use_mock_backend else "delta_vfd_modbus"
        self.get_logger().info(f"Ground reel motor listo. backend={backend_name}")

    def handle_set_mode(
        self,
        request: SetAdmissionReelMode.Request,
        response: SetAdmissionReelMode.Response,
    ) -> SetAdmissionReelMode.Response:
        requested_mode = request.mode.upper()
        if requested_mode not in self.VALID_MODES:
            response.success = False
            response.message = f"Modo no válido: {request.mode}"
            return response

        with self._lock:
            clamped_speed = min(max(float(request.speed), 0.0), self.max_speed)
            target_frequency_hz = self.resolve_frequency(requested_mode, clamped_speed)

            try:
                self.apply_backend_command(requested_mode, target_frequency_hz)
            except Exception as exc:
                self.last_error = str(exc)
                self.backend_connected = False
                response.success = False
                response.message = f"Error controlando la bobina de suelo: {exc}"
                self.get_logger().error(response.message)
                return response

            self.mode = requested_mode
            self.speed = 0.0 if requested_mode == "STOP" else clamped_speed
            self.frequency_hz = target_frequency_hz
            self.last_error = ""
            response.success = True
            if requested_mode == "STOP":
                response.message = "Bobina de suelo parada"
            else:
                response.message = (
                    f"Bobina de suelo en {self.mode} a {self.speed:.2f} "
                    f"({self.frequency_hz:.2f} Hz)"
                )
            self.get_logger().info(response.message)
        return response

    def clamp_frequency(self, value_hz: float) -> float:
        return min(max(float(value_hz), self.min_frequency_hz), self.max_frequency_hz)

    def resolve_frequency(self, mode: str, speed: float) -> float:
        if mode == "STOP":
            return 0.0

        if speed <= 0.0:
            if mode == "UNROLL":
                return self.default_unroll_frequency_hz
            return self.default_roll_frequency_hz

        normalized = speed / self.max_speed if self.max_speed > 0.0 else 0.0
        return self.min_frequency_hz + (self.max_frequency_hz - self.min_frequency_hz) * normalized

    def apply_backend_command(self, mode: str, frequency_hz: float) -> None:
        if self.use_mock_backend:
            self.backend_connected = True
            return

        if self.backend is None:
            raise RuntimeError("Backend Delta VFD no inicializado.")

        if mode == "STOP":
            self.backend.stop()
            self.backend_connected = self.backend.connected
            return

        self.backend.run(mode, frequency_hz)
        self.backend_connected = self.backend.connected

    def publish_status(self) -> None:
        msg = MasterStatus()
        msg.state = "FAULT" if self.last_error else "READY"
        msg.pump_enabled = False
        msg.reel_state = f"{self.mode}:{self.speed:.2f}:f={self.frequency_hz:.2f}"
        msg.link_ok = bool(self.backend_connected)
        msg.system_armed = False
        self.status_pub.publish(msg)

    def destroy_node(self) -> bool:
        try:
            if self.backend is not None:
                try:
                    self.backend.stop()
                except Exception as exc:  # pragma: no cover - cierre defensivo
                    self.get_logger().warn(f"No se pudo parar el VFD Delta al cerrar: {exc}")
                self.backend.close()
        finally:
            return super().destroy_node()


def main() -> None:
    rclpy.init()
    node = GroundReelMotorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
