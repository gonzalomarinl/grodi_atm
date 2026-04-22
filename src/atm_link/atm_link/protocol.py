"""Protocolo del enlace fiable maestra-esclava."""

from __future__ import annotations

from copy import deepcopy

VERSION = 1

MASTER_ID = 1
SLAVE_ID = 2
BROADCAST_ID = 255

FLAG_ACK_REQUIRED = 0x01
FLAG_IS_ACK = 0x02
FLAG_IS_CRITICAL = 0x04

HEARTBEAT = "HEARTBEAT"
MISSION_STATE = "MISSION_STATE"
MISSION_TARGET = "MISSION_TARGET"
MISSION_EVENT = "MISSION_EVENT"
SLAVE_STATUS = "SLAVE_STATUS"
FAULT = "FAULT"
RETURN_HOME = "RETURN_HOME"
LINK_ACK = "LINK_ACK"
RADIO_STATS = "RADIO_STATS"

MSG_TYPE_TO_ID = {
    HEARTBEAT: 0x01,
    MISSION_STATE: 0x02,
    MISSION_TARGET: 0x03,
    MISSION_EVENT: 0x04,
    SLAVE_STATUS: 0x05,
    FAULT: 0x06,
    RETURN_HOME: 0x07,
    LINK_ACK: 0x08,
    RADIO_STATS: 0x09,
}
ID_TO_MSG_TYPE = {value: key for key, value in MSG_TYPE_TO_ID.items()}

MASTER_TO_SLAVE = {
    HEARTBEAT,
    MISSION_STATE,
    MISSION_TARGET,
    MISSION_EVENT,
    RETURN_HOME,
    LINK_ACK,
}

SLAVE_TO_MASTER = {
    HEARTBEAT,
    SLAVE_STATUS,
    MISSION_EVENT,
    FAULT,
    LINK_ACK,
}

CRITICAL_MSG_TYPES = {
    MISSION_TARGET,
    FAULT,
    RETURN_HOME,
}

CRITICAL_MISSION_EVENTS = {
    "return_home",
    "mission_cancelled",
    "pump_on_request",
    "pump_on_ack",
    "pump_off_request",
    "pump_off_ack",
    "fault_detected",
    "return_started",
    "return_completed",
}


def msg_type_to_id(msg_type: str) -> int:
    return MSG_TYPE_TO_ID[msg_type]


def id_to_msg_type(msg_id: int) -> str:
    return ID_TO_MSG_TYPE[msg_id]


def next_seq(current_seq: int) -> int:
    return 1 if current_seq >= 0xFFFF else current_seq + 1


def frame_flags(
    *,
    ack_required: bool = False,
    is_ack: bool = False,
    critical: bool = False,
) -> int:
    flags = 0
    if ack_required:
        flags |= FLAG_ACK_REQUIRED
    if is_ack:
        flags |= FLAG_IS_ACK
    if critical:
        flags |= FLAG_IS_CRITICAL
    return flags


def parse_flags(flags: int) -> dict[str, bool]:
    return {
        "ack_required": bool(flags & FLAG_ACK_REQUIRED),
        "is_ack": bool(flags & FLAG_IS_ACK),
        "critical": bool(flags & FLAG_IS_CRITICAL),
    }


def mission_event_is_critical(event_type: str) -> bool:
    return event_type in CRITICAL_MISSION_EVENTS


def requires_ack(frame: dict) -> bool:
    return parse_flags(int(frame.get("flags", 0))).get("ack_required", False)


def build_frame(
    *,
    msg_type: str,
    payload: dict | None = None,
    seq: int = 0,
    ack_seq: int = 0,
    source_id: int,
    target_id: int,
    ack_required: bool | None = None,
    is_ack: bool = False,
    critical: bool | None = None,
) -> dict:
    payload = payload or {}
    if critical is None:
        critical = msg_type in CRITICAL_MSG_TYPES or (
            msg_type == MISSION_EVENT and mission_event_is_critical(payload.get("event_type", ""))
        )
    if ack_required is None:
        ack_required = critical and not is_ack

    return {
        "version": VERSION,
        "msg_type": msg_type,
        "msg_id": msg_type_to_id(msg_type),
        "flags": frame_flags(ack_required=ack_required, is_ack=is_ack, critical=critical),
        "seq": int(seq),
        "ack_seq": int(ack_seq),
        "source_id": int(source_id),
        "target_id": int(target_id),
        "payload": deepcopy(payload),
    }


def build_ack(*, seq: int, ack_seq: int, source_id: int, target_id: int) -> dict:
    return build_frame(
        msg_type=LINK_ACK,
        payload={},
        seq=seq,
        ack_seq=ack_seq,
        source_id=source_id,
        target_id=target_id,
        ack_required=False,
        is_ack=True,
        critical=False,
    )


def normalize_frame(frame: dict) -> dict:
    normalized = deepcopy(frame)
    normalized.setdefault("version", VERSION)
    normalized.setdefault("payload", {})
    normalized["msg_id"] = normalized.get("msg_id", msg_type_to_id(normalized["msg_type"]))
    normalized["flags"] = int(normalized.get("flags", 0))
    normalized["seq"] = int(normalized.get("seq", 0))
    normalized["ack_seq"] = int(normalized.get("ack_seq", 0))
    normalized["source_id"] = int(normalized.get("source_id", 0))
    normalized["target_id"] = int(normalized.get("target_id", 0))
    return normalized


def target_matches(frame: dict, local_id: int) -> bool:
    return frame.get("target_id", 0) in {local_id, BROADCAST_ID}
