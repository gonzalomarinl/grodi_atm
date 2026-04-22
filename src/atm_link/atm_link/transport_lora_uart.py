"""Transporte UART real para módulos LoRa serie tipo EBYTE."""

from __future__ import annotations

import time

from atm_link.framing import FrameDecoder, encode_frame

try:
    import serial  # type: ignore
except ImportError:  # pragma: no cover
    serial = None


class LoraUartTransport:
    """Transporte sobre UART con framing binario."""

    def __init__(
        self,
        *,
        port: str,
        baudrate: int,
        timeout_sec: float,
    ) -> None:
        if serial is None:
            raise RuntimeError("El backend UART requiere instalar pyserial en la Raspberry.")

        self.decoder = FrameDecoder()
        self.serial = serial.Serial(
            port=port,
            baudrate=int(baudrate),
            timeout=float(timeout_sec),
            write_timeout=float(timeout_sec),
        )
        time.sleep(0.1)
        if self.serial.in_waiting:
            self.serial.read(self.serial.in_waiting)

    def send(self, frame: dict) -> None:
        self.serial.write(encode_frame(frame))
        self.serial.flush()

    def poll(self) -> list[dict]:
        available = self.serial.in_waiting
        if available <= 0:
            return []
        return self.decoder.append(self.serial.read(available))

    def close(self) -> None:
        if self.serial is not None and self.serial.is_open:
            self.serial.close()
