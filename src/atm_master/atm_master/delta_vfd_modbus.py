"""Backend Modbus RTU para el variador Delta VFD-EL del carrete de suelo."""

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


DELTA_COMMAND_REGISTER = 0x2000
DELTA_FREQUENCY_REGISTER = 0x2001

DELTA_STOP_COMMAND = 0x0001
DELTA_RUN_FWD_COMMAND = 0x0012
DELTA_RUN_REV_COMMAND = 0x0022


@dataclass
class DeltaVfdConfig:
    port: str = "/dev/ttyUSB0"
    baudrate: int = 9600
    bytesize: int = 8
    parity: str = "N"
    stopbits: int = 1
    slave_id: int = 1
    timeout_sec: float = 0.3
    command_settle_sec: float = 0.05
    direction_change_stop_sec: float = 0.2
    stop_before_reverse: bool = True
    unroll_direction: str = "FWD"
    roll_direction: str = "REV"


class DeltaVfdModbusBackend:
    """Controla el VFD Delta por Modbus RTU."""

    def __init__(self, config: DeltaVfdConfig, logger: Any) -> None:
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
        self.last_direction: str | None = None

    def close(self) -> None:
        if self.client is not None:
            self.client.close()
        self.connected = False

    def ensure_connected(self) -> None:
        if self.connected:
            return

        if not self.client.connect():
            raise RuntimeError(
                f"No se pudo abrir Modbus RTU en {self.config.port} a {self.config.baudrate} bps."
            )
        self.connected = True

    def stop(self) -> None:
        self.ensure_connected()
        self._write_register(DELTA_COMMAND_REGISTER, DELTA_STOP_COMMAND)
        self.last_direction = None
        sleep(self.config.command_settle_sec)

    def run(self, mode: str, frequency_hz: float) -> None:
        self.ensure_connected()

        direction = self._resolve_direction(mode)
        command = DELTA_RUN_FWD_COMMAND if direction == "FWD" else DELTA_RUN_REV_COMMAND
        frequency_value = int(round(max(0.0, frequency_hz) * 100.0))

        if (
            self.config.stop_before_reverse
            and self.last_direction is not None
            and self.last_direction != direction
        ):
            self._write_register(DELTA_COMMAND_REGISTER, DELTA_STOP_COMMAND)
            sleep(self.config.direction_change_stop_sec)

        self._write_register(DELTA_FREQUENCY_REGISTER, frequency_value)
        sleep(self.config.command_settle_sec)
        self._write_register(DELTA_COMMAND_REGISTER, command)
        self.last_direction = direction
        sleep(self.config.command_settle_sec)

    def _resolve_direction(self, mode: str) -> str:
        if mode == "UNROLL":
            return self.config.unroll_direction.upper()
        if mode == "ROLL":
            return self.config.roll_direction.upper()
        raise RuntimeError(f"Modo de bobina no soportado por el backend Delta: {mode}")

    def _write_register(self, address: int, value: int) -> None:
        kwargs = {"address": address, "value": value}

        try:
            result = self.client.write_register(slave=self.config.slave_id, **kwargs)
        except TypeError:  # pragma: no cover - compat con pymodbus 2.x
            result = self.client.write_register(unit=self.config.slave_id, **kwargs)
        except Exception:
            self.connected = False
            raise

        if hasattr(result, "isError") and result.isError():
            self.connected = False
            raise RuntimeError(f"Error Modbus escribiendo 0x{address:04X}={value}. Resultado: {result}")

