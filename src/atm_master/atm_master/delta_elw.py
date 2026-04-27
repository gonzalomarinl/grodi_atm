"""Driver Modbus RTU simple para Delta VFD-EL-W."""

from __future__ import annotations

from dataclasses import dataclass
from time import sleep
from typing import Any

try:
    from pymodbus.client import ModbusSerialClient
except ImportError:  # pragma: no cover - compat con pymodbus 2.x o entorno sin dependencia
    try:
        from pymodbus.client.sync import ModbusSerialClient  # type: ignore
    except ImportError:  # pragma: no cover
        ModbusSerialClient = None  # type: ignore[assignment]


COMMAND_REGISTER = 0x2000
FREQUENCY_REGISTER = 0x2001

RUN_FORWARD_COMMAND = 0x0012
RUN_REVERSE_COMMAND = 0x0022
STOP_COMMAND = 0x0001


@dataclass
class DeltaElwConfig:
    port: str = "/dev/ttyUSB0"
    baudrate: int = 9600
    bytesize: int = 8
    parity: str = "N"
    stopbits: int = 1
    slave_id: int = 1
    timeout_sec: float = 0.3
    command_settle_sec: float = 0.05
    direction_change_stop_sec: float = 0.2


class DeltaElwDriver:
    """Driver simple para control real del variador Delta por Modbus RTU."""

    def __init__(self, config: DeltaElwConfig, logger: Any | None = None) -> None:
        if ModbusSerialClient is None:
            raise RuntimeError(
                "No se ha encontrado pymodbus. Instala python3-pymodbus en la Raspberry maestra."
            )

        self.config = config
        self.logger = logger
        self.client = ModbusSerialClient(
            method="rtu",
            port=config.port,
            baudrate=config.baudrate,
            bytesize=config.bytesize,
            parity=config.parity,
            stopbits=config.stopbits,
            timeout=config.timeout_sec,
        )
        self.connected = False
        self.last_frequency_hz = 0.0
        self.last_command = "STOP"
        self.last_error = ""

    def connect(self) -> None:
        if self.connected:
            return
        if not self.client.connect():
            raise RuntimeError(
                f"No se pudo abrir Modbus RTU en {self.config.port} a {self.config.baudrate} bps."
            )
        self.connected = True
        self.last_error = ""

    def set_frequency(self, hz: float) -> None:
        self.connect()
        value = int(round(max(0.0, float(hz)) * 100.0))
        self._write_register(FREQUENCY_REGISTER, value)
        self.last_frequency_hz = max(0.0, float(hz))
        sleep(self.config.command_settle_sec)

    def run_forward(self) -> None:
        self.connect()
        self._write_register(COMMAND_REGISTER, RUN_FORWARD_COMMAND)
        self.last_command = "RUN_FORWARD"
        sleep(self.config.command_settle_sec)

    def run_reverse(self) -> None:
        self.connect()
        self._write_register(COMMAND_REGISTER, RUN_REVERSE_COMMAND)
        self.last_command = "RUN_REVERSE"
        sleep(self.config.command_settle_sec)

    def stop(self) -> None:
        self.connect()
        self._write_register(COMMAND_REGISTER, STOP_COMMAND)
        self.last_command = "STOP"
        self.last_frequency_hz = 0.0
        sleep(self.config.command_settle_sec)

    def read_status(self) -> dict[str, object]:
        return {
            "connected": self.connected,
            "last_command": self.last_command,
            "last_frequency_hz": self.last_frequency_hz,
            "last_error": self.last_error,
        }

    def close(self) -> None:
        self.client.close()
        self.connected = False

    def safe_reverse_transition(self) -> None:
        self.stop()
        sleep(self.config.direction_change_stop_sec)

    def _write_register(self, address: int, value: int) -> None:
        kwargs = {"address": address, "value": value}
        try:
            try:
                result = self.client.write_register(slave=self.config.slave_id, **kwargs)
            except TypeError:  # pragma: no cover - compat con pymodbus 2.x
                result = self.client.write_register(unit=self.config.slave_id, **kwargs)
        except Exception as exc:
            self.connected = False
            self.last_error = str(exc)
            raise

        if hasattr(result, "isError") and result.isError():
            self.connected = False
            self.last_error = f"Error Modbus en 0x{address:04X}={value}: {result}"
            raise RuntimeError(self.last_error)

