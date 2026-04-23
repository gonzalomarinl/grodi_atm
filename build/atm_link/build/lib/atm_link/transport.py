"""Fábrica de transportes del enlace."""

from __future__ import annotations

from atm_link.transport_jsonl import JsonlTransport
from atm_link.transport_lora_uart import LoraUartTransport


def create_transport(
    transport_type: str,
    *,
    tx_path: str,
    rx_path: str,
    uart_port: str,
    uart_baudrate: int,
    uart_timeout_sec: float,
):
    normalized = transport_type.lower()
    if normalized == "jsonl":
        return JsonlTransport(tx_path=tx_path, rx_path=rx_path)
    if normalized == "uart":
        return LoraUartTransport(
            port=uart_port,
            baudrate=uart_baudrate,
            timeout_sec=uart_timeout_sec,
        )
    raise ValueError(f"Tipo de transporte no soportado: {transport_type}")
