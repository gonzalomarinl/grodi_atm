"""Framing binario para el enlace LoRa UART."""

from __future__ import annotations

import binascii
import json
import struct

from atm_link import protocol

SOF = b"\xAA\x55"
HEADER_FMT = ">BBBHHBBH"
HEADER_LEN = struct.calcsize(HEADER_FMT)
CRC_FMT = ">H"
CRC_LEN = struct.calcsize(CRC_FMT)


def crc16(data: bytes) -> int:
    return binascii.crc_hqx(data, 0xFFFF)


def encode_frame(frame: dict) -> bytes:
    normalized = protocol.normalize_frame(frame)
    payload_bytes = json.dumps(
        normalized.get("payload", {}),
        separators=(",", ":"),
        sort_keys=True,
    ).encode("utf-8")
    header = struct.pack(
        HEADER_FMT,
        int(normalized["version"]),
        int(normalized["msg_id"]),
        int(normalized["flags"]),
        int(normalized["seq"]),
        int(normalized["ack_seq"]),
        int(normalized["source_id"]),
        int(normalized["target_id"]),
        len(payload_bytes),
    )
    body = SOF + header + payload_bytes
    return body + struct.pack(CRC_FMT, crc16(body))


def decode_frame(packet: bytes) -> dict:
    if len(packet) < len(SOF) + HEADER_LEN + CRC_LEN:
        raise ValueError("packet too short")
    if packet[:2] != SOF:
        raise ValueError("invalid SOF")

    expected_crc = struct.unpack(CRC_FMT, packet[-CRC_LEN:])[0]
    body = packet[:-CRC_LEN]
    if crc16(body) != expected_crc:
        raise ValueError("crc mismatch")

    (
        version,
        msg_id,
        flags,
        seq,
        ack_seq,
        source_id,
        target_id,
        payload_len,
    ) = struct.unpack(HEADER_FMT, packet[2:2 + HEADER_LEN])
    payload_start = 2 + HEADER_LEN
    payload_end = payload_start + payload_len
    payload_bytes = packet[payload_start:payload_end]
    payload = json.loads(payload_bytes.decode("utf-8")) if payload_bytes else {}

    return protocol.normalize_frame(
        {
            "version": version,
            "msg_type": protocol.id_to_msg_type(msg_id),
            "msg_id": msg_id,
            "flags": flags,
            "seq": seq,
            "ack_seq": ack_seq,
            "source_id": source_id,
            "target_id": target_id,
            "payload": payload,
        }
    )


class FrameDecoder:
    """Decodificador incremental de tramas binarias."""

    def __init__(self) -> None:
        self.buffer = bytearray()

    def append(self, data: bytes) -> list[dict]:
        if not data:
            return []

        self.buffer.extend(data)
        frames: list[dict] = []

        while True:
            sof_index = self.buffer.find(SOF)
            if sof_index < 0:
                self.buffer.clear()
                break

            if sof_index > 0:
                del self.buffer[:sof_index]

            if len(self.buffer) < len(SOF) + HEADER_LEN + CRC_LEN:
                break

            header_start = len(SOF)
            header_end = header_start + HEADER_LEN
            try:
                *_unused, payload_len = struct.unpack(HEADER_FMT, self.buffer[header_start:header_end])
            except struct.error:
                break

            packet_len = len(SOF) + HEADER_LEN + payload_len + CRC_LEN
            if len(self.buffer) < packet_len:
                break

            packet = bytes(self.buffer[:packet_len])
            del self.buffer[:packet_len]
            try:
                frames.append(decode_frame(packet))
            except Exception:
                continue

        return frames
