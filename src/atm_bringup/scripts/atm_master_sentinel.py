#!/usr/bin/env python3
"""Sentinel externo de la Raspberry maestra del atomizador."""

from __future__ import annotations

import json
import subprocess
import time
from datetime import datetime, timedelta
from pathlib import Path


CHECK_EVERY = 15
FAILS_RESTART_LINK = 3
FAILS_RESTART_STACK = 5
FAILS_REBOOT = 8

MASTER_UNIT = "atm-master.service"
LINK_UNIT = "atm-link-master.service"
HEALTH_PATH = Path("/run/atm/master_health.json")
CRITICAL_STATES = {"EXECUTING", "RETURNING_HOME", "PURGING"}


def run(cmd: list[str]) -> str:
    return subprocess.check_output(cmd, text=True, stderr=subprocess.STDOUT)


def _ok(cmd: list[str]) -> bool:
    return subprocess.call(
        cmd,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
    ) == 0


def systemctl_show(service: str, props: list[str]) -> dict[str, str]:
    out = run(["systemctl", "show", service] + [f"-p{prop}" for prop in props])
    data: dict[str, str] = {}
    for line in out.splitlines():
        if "=" in line:
            key, value = line.split("=", 1)
            data[key.strip()] = value.strip()
    return data


def journal_mentions_manual_stop(service: str, minutes: int = 15) -> bool:
    since = (datetime.now() - timedelta(minutes=minutes)).strftime("%Y-%m-%d %H:%M:%S")
    try:
        out = run(["journalctl", "-u", service, "--since", since, "--no-pager", "-n", "200"])
    except subprocess.CalledProcessError:
        return False
    return any(token in out for token in ("Stopped", "Stopping", "Requested stop"))


def classify(service: str) -> str:
    props = [
        "ActiveState",
        "SubState",
        "Result",
        "ExecMainCode",
        "ExecMainStatus",
        "MainPID",
    ]
    data = systemctl_show(service, props)

    active = data.get("ActiveState", "")
    sub = data.get("SubState", "")
    result = data.get("Result", "")
    code = data.get("ExecMainCode", "")
    status = data.get("ExecMainStatus", "")
    mainpid = data.get("MainPID", "0")

    if active == "active" and sub == "running" and mainpid not in ("0", "", None):
        return "running_ok"
    if active == "failed":
        return "crash"
    if active == "inactive" and sub in ("dead", "exited", ""):
        if result and result != "success":
            return "crash"
        if code == "exited" and status.isdigit() and int(status) != 0:
            return "crash"
        if code in ("killed", "dumped"):
            return "crash"
        if journal_mentions_manual_stop(service):
            return "manual_stop"
        return "manual_stop"
    if active in ("activating", "deactivating", "reloading"):
        return "unknown"
    return "unknown"


def load_health() -> dict:
    try:
        return json.loads(HEALTH_PATH.read_text(encoding="utf-8"))
    except Exception:
        return {}


def health_ok(health: dict) -> bool:
    if not health:
        return False
    return bool(health.get("system_armed") is not None)


def critical_operation(health: dict) -> bool:
    if not health:
        return False
    if bool(health.get("critical_operation", False)):
        return True
    return health.get("mission_state") in CRITICAL_STATES


def log(message: str) -> None:
    print(f"[atm-master-sentinel] {message}", flush=True)


def restart_unit(unit: str) -> None:
    subprocess.call(["/bin/systemctl", "restart", unit])


def reboot_machine() -> None:
    subprocess.call(["/sbin/reboot", "-f"])


def main() -> None:
    fails = 0

    while True:
        health = load_health()
        stack_state = classify(MASTER_UNIT)
        link_state = classify(LINK_UNIT)

        stack_ok = stack_state == "running_ok" and health_ok(health)
        link_ok = link_state in ("running_ok", "manual_stop")
        in_critical = critical_operation(health)

        if stack_state == "manual_stop":
            log(f"{MASTER_UNIT} detenido manualmente. Se suspende recuperación automática.")
            fails = 0
            time.sleep(CHECK_EVERY)
            continue

        if in_critical:
            if not stack_ok or not link_ok:
                log(
                    "Fallo detectado durante operación crítica. "
                    "No se reinicia automáticamente; se mantiene vigilancia."
                )
            fails = 0
            time.sleep(CHECK_EVERY)
            continue

        healthy = stack_ok and link_ok
        if healthy:
            if fails:
                log(f"Sistema recuperado. Reset de fallos {fails}->0.")
            fails = 0
            time.sleep(CHECK_EVERY)
            continue

        fails += 1
        log(
            f"Fallo {fails}: stack_state={stack_state}, link_state={link_state}, "
            f"health_ok={health_ok(health)}"
        )

        if fails == FAILS_RESTART_LINK:
            log(f"Reiniciando enlace maestro {LINK_UNIT}.")
            restart_unit(LINK_UNIT)
        elif fails == FAILS_RESTART_STACK:
            log(f"Reiniciando stack maestro {MASTER_UNIT}.")
            restart_unit(MASTER_UNIT)
        elif fails >= FAILS_REBOOT:
            log("Umbral final alcanzado. Reboot de maestra.")
            reboot_machine()

        time.sleep(CHECK_EVERY)


if __name__ == "__main__":
    main()
