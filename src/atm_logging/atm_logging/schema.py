"""Esquemas comunes de registros estructurados."""

from __future__ import annotations

from datetime import datetime, timezone


def now_iso() -> str:
    return datetime.now(timezone.utc).isoformat()


def stamp_to_dict(stamp_msg) -> dict:
    return {
        "sec": int(getattr(stamp_msg, "sec", 0)),
        "nanosec": int(getattr(stamp_msg, "nanosec", 0)),
    }


def base_record(*, machine: str, node: str, category: str, event_type: str, mission_id: str = "") -> dict:
    return {
        "ts": now_iso(),
        "machine": machine,
        "node": node,
        "mission_id": mission_id,
        "category": category,
        "event_type": event_type,
    }
