"""Nodo ROS 2 del carrete de suelo."""

from __future__ import annotations

from threading import Lock

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MasterStatus
from atm_interfaces.srv import SetAdmissionReelMode
from atm_master.delta_elw import DeltaElwConfig, DeltaElwDriver


class GroundReelMotorNode(Node):
    """Controla el carrete grande del suelo mediante el Delta VFD."""

    VALID_MODES = {"STOP", "UNROLL", "ROLL"}

    def __init__(self) -> None:
        super().__init__("ground_reel_motor")

        self.declare_parameter("use_mock_backend", True)
        self.declare_parameter("status_period_sec", 0.5)
        self.declare_parameter("startup_mode", "STOP")
        self.declare_parameter("unroll_hz", 35.0)
        self.declare_parameter("roll_hz", 35.0)
        self.declare_parameter("serial_port", "/dev/ttyUSB0")
        self.declare_parameter("baudrate", 9600)
        self.declare_parameter("bytesize", 8)
        self.declare_parameter("parity", "N")
        self.declare_parameter("stopbits", 1)
        self.declare_parameter("slave_id", 1)
        self.declare_parameter("modbus_timeout_sec", 0.3)
        self.declare_parameter("command_settle_sec", 0.05)
        self.declare_parameter("direction_change_stop_sec", 0.2)

        self.use_mock_backend = bool(self.get_parameter("use_mock_backend").value)
        self.unroll_hz = max(0.0, float(self.get_parameter("unroll_hz").value))
        self.roll_hz = max(0.0, float(self.get_parameter("roll_hz").value))
        self.mode = str(self.get_parameter("startup_mode").value).upper()
        if self.mode not in self.VALID_MODES:
            self.mode = "STOP"

        self.frequency_hz = 0.0
        self.last_error = ""
        self.backend_connected = self.use_mock_backend
        self._lock = Lock()

        self.driver = None
        if not self.use_mock_backend:
            self.driver = DeltaElwDriver(
                DeltaElwConfig(
                    port=str(self.get_parameter("serial_port").value),
                    baudrate=int(self.get_parameter("baudrate").value),
                    bytesize=int(self.get_parameter("bytesize").value),
                    parity=str(self.get_parameter("parity").value),
                    stopbits=int(self.get_parameter("stopbits").value),
                    slave_id=int(self.get_parameter("slave_id").value),
                    timeout_sec=float(self.get_parameter("modbus_timeout_sec").value),
                    command_settle_sec=float(self.get_parameter("command_settle_sec").value),
                    direction_change_stop_sec=float(self.get_parameter("direction_change_stop_sec").value),
                ),
                logger=self.get_logger(),
            )
            self.driver.connect()
            self.backend_connected = True

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

        backend_name = "mock" if self.use_mock_backend else "delta_elw_modbus"
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
            try:
                self.apply_mode(requested_mode)
            except Exception as exc:
                self.last_error = str(exc)
                self.backend_connected = False
                response.success = False
                response.message = f"Error controlando la bobina de suelo: {exc}"
                self.get_logger().error(response.message)
                return response

            self.mode = requested_mode
            self.last_error = ""
            response.success = True
            if self.mode == "STOP":
                response.message = "Bobina de suelo parada"
            else:
                response.message = f"Bobina de suelo en {self.mode} ({self.frequency_hz:.2f} Hz)"
            self.get_logger().info(response.message)
            return response

    def apply_mode(self, mode: str) -> None:
        if self.use_mock_backend:
            if mode == "STOP":
                self.frequency_hz = 0.0
            elif mode == "UNROLL":
                self.frequency_hz = self.unroll_hz
            elif mode == "ROLL":
                self.frequency_hz = self.roll_hz
            self.backend_connected = True
            return

        if self.driver is None:
            raise RuntimeError("Driver Delta EL-W no inicializado.")

        if mode == "STOP":
            self.driver.stop()
            self.frequency_hz = 0.0
        elif mode == "UNROLL":
            if self.mode == "ROLL":
                self.driver.safe_reverse_transition()
            self.driver.set_frequency(self.unroll_hz)
            self.driver.run_forward()
            self.frequency_hz = self.unroll_hz
        elif mode == "ROLL":
            if self.mode == "UNROLL":
                self.driver.safe_reverse_transition()
            self.driver.set_frequency(self.roll_hz)
            self.driver.run_reverse()
            self.frequency_hz = self.roll_hz

        self.backend_connected = self.driver.read_status()["connected"]

    def publish_status(self) -> None:
        msg = MasterStatus()
        msg.state = "FAULT" if self.last_error else "READY"
        msg.pump_enabled = False
        msg.reel_state = f"{self.mode}:f={self.frequency_hz:.2f}"
        msg.link_ok = bool(self.backend_connected)
        msg.system_armed = False
        self.status_pub.publish(msg)

    def destroy_node(self) -> bool:
        try:
            if self.driver is not None:
                try:
                    self.driver.stop()
                except Exception as exc:  # pragma: no cover - cierre defensivo
                    self.get_logger().warn(f"No se pudo parar la bobina al cerrar: {exc}")
                self.driver.close()
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
