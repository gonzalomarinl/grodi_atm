"""Utilidades de rutas para logging persistente."""

from __future__ import annotations

from pathlib import Path


def resolve_base_log_dir(configured_dir: str, fallback_dir: str) -> Path:
    base = Path(configured_dir)
    try:
        base.mkdir(parents=True, exist_ok=True)
        return base
    except PermissionError:
        fallback = Path(fallback_dir)
        fallback.mkdir(parents=True, exist_ok=True)
        return fallback


def mission_dir(base_log_dir: Path, mission_id: str) -> Path:
    normalized = mission_id or "unknown_mission"
    target = base_log_dir / "missions" / normalized
    target.mkdir(parents=True, exist_ok=True)
    return target
