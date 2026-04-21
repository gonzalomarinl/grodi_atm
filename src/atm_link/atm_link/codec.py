"""Codificación compacta de mensajes del enlace."""

from __future__ import annotations

from atm_interfaces.msg import FaultReport, Heartbeat, LineTarget, MissionEvent, MissionState, SlaveStatus

from atm_link import protocol


def heartbeat_to_frame(msg: Heartbeat) -> dict:
    return {
        "msg_type": protocol.HEARTBEAT,
        "payload": {
            "node_name": msg.node_name,
            "machine_id": msg.machine_id,
            "seq": int(msg.seq),
            "ok": bool(msg.ok),
            "state": msg.state,
        },
    }


def frame_to_heartbeat(frame: dict) -> Heartbeat:
    payload = frame.get("payload", {})
    msg = Heartbeat()
    msg.node_name = payload.get("node_name", "")
    msg.machine_id = payload.get("machine_id", "")
    msg.seq = int(payload.get("seq", 0))
    msg.ok = bool(payload.get("ok", False))
    msg.state = payload.get("state", "")
    return msg


def mission_state_to_frame(msg: MissionState) -> dict:
    return {
        "msg_type": protocol.MISSION_STATE,
        "payload": {
            "mission_id": msg.mission_id,
            "mission_type": msg.mission_type,
            "state": msg.state,
            "current_stop_index": int(msg.current_stop_index),
            "current_line_id": msg.current_line_id,
            "comms_degraded": bool(msg.comms_degraded),
        },
    }


def frame_to_mission_state(frame: dict) -> MissionState:
    payload = frame.get("payload", {})
    msg = MissionState()
    msg.mission_id = payload.get("mission_id", "")
    msg.mission_type = payload.get("mission_type", "")
    msg.state = payload.get("state", "")
    msg.current_stop_index = int(payload.get("current_stop_index", 0))
    msg.current_line_id = payload.get("current_line_id", "")
    msg.comms_degraded = bool(payload.get("comms_degraded", False))
    return msg


def line_target_to_frame(msg: LineTarget) -> dict:
    return {
        "msg_type": protocol.MISSION_TARGET,
        "payload": {
            "mission_id": msg.mission_id,
            "gap_id": msg.gap_id,
            "line_id": msg.line_id,
            "stop_index": int(msg.stop_index),
            "mode": msg.mode,
            "selected_by_vega": bool(msg.selected_by_vega),
            "notes": msg.notes,
        },
    }


def frame_to_line_target(frame: dict) -> LineTarget:
    payload = frame.get("payload", {})
    msg = LineTarget()
    msg.mission_id = payload.get("mission_id", "")
    msg.gap_id = payload.get("gap_id", "")
    msg.line_id = payload.get("line_id", "")
    msg.stop_index = int(payload.get("stop_index", 0))
    msg.mode = payload.get("mode", "")
    msg.selected_by_vega = bool(payload.get("selected_by_vega", False))
    msg.notes = payload.get("notes", "")
    return msg


def mission_event_to_frame(msg: MissionEvent) -> dict:
    return {
        "msg_type": protocol.MISSION_EVENT,
        "payload": {
            "mission_id": msg.mission_id,
            "event_type": msg.event_type,
            "source": msg.source,
            "detail": msg.detail,
        },
    }


def frame_to_mission_event(frame: dict) -> MissionEvent:
    payload = frame.get("payload", {})
    msg = MissionEvent()
    msg.mission_id = payload.get("mission_id", "")
    msg.event_type = payload.get("event_type", "")
    msg.source = payload.get("source", "")
    msg.detail = payload.get("detail", "")
    return msg


def slave_status_to_frame(msg: SlaveStatus) -> dict:
    return {
        "msg_type": protocol.SLAVE_STATUS,
        "payload": {
            "state": msg.state,
            "at_base": bool(msg.at_base),
            "moving": bool(msg.moving),
            "atomizer_up": bool(msg.atomizer_up),
            "atomizer_down": bool(msg.atomizer_down),
            "current_line_id": msg.current_line_id,
            "current_stop_index": int(msg.current_stop_index),
            "link_ok": bool(msg.link_ok),
        },
    }


def frame_to_slave_status(frame: dict) -> SlaveStatus:
    payload = frame.get("payload", {})
    msg = SlaveStatus()
    msg.state = payload.get("state", "")
    msg.at_base = bool(payload.get("at_base", False))
    msg.moving = bool(payload.get("moving", False))
    msg.atomizer_up = bool(payload.get("atomizer_up", False))
    msg.atomizer_down = bool(payload.get("atomizer_down", False))
    msg.current_line_id = payload.get("current_line_id", "")
    msg.current_stop_index = int(payload.get("current_stop_index", 0))
    msg.link_ok = bool(payload.get("link_ok", False))
    return msg


def fault_to_frame(msg: FaultReport) -> dict:
    return {
        "msg_type": protocol.FAULT,
        "payload": {
            "mission_id": msg.mission_id,
            "source": msg.source,
            "fault_code": msg.fault_code,
            "severity": msg.severity,
            "description": msg.description,
            "requires_return_home": bool(msg.requires_return_home),
        },
    }


def frame_to_fault(frame: dict) -> FaultReport:
    payload = frame.get("payload", {})
    msg = FaultReport()
    msg.mission_id = payload.get("mission_id", "")
    msg.source = payload.get("source", "")
    msg.fault_code = payload.get("fault_code", "")
    msg.severity = payload.get("severity", "")
    msg.description = payload.get("description", "")
    msg.requires_return_home = bool(payload.get("requires_return_home", False))
    return msg
