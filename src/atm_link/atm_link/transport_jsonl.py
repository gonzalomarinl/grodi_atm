"""Transporte local simple para simular el enlace LoRa durante desarrollo."""

from __future__ import annotations

import json
from pathlib import Path


class JsonlTransport:
    """Transporte sobre archivos JSONL."""

    def __init__(self, tx_path: str, rx_path: str) -> None:
        self.tx_path = Path(tx_path)
        self.rx_path = Path(rx_path)
        self.tx_path.parent.mkdir(parents=True, exist_ok=True)
        self.rx_path.parent.mkdir(parents=True, exist_ok=True)
        self.tx_path.touch(exist_ok=True)
        self.rx_path.touch(exist_ok=True)
        # Ignora backlog de sesiones anteriores para que cada arranque del stack
        # procese solo tramas nuevas y no degrade el enlace por histórico viejo.
        self._rx_offset = self.rx_path.stat().st_size

    def send(self, frame: dict) -> None:
        with self.tx_path.open("a", encoding="utf-8") as handle:
            handle.write(json.dumps(frame, separators=(",", ":"), sort_keys=True) + "\n")

    def poll(self) -> list[dict]:
        frames: list[dict] = []
        with self.rx_path.open("r", encoding="utf-8") as handle:
            handle.seek(self._rx_offset)
            for line in handle:
                line = line.strip()
                if not line:
                    continue
                try:
                    frames.append(json.loads(line))
                except json.JSONDecodeError:
                    continue
            self._rx_offset = handle.tell()
        return frames

    def close(self) -> None:
        return None
