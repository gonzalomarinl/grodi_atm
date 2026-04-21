#!/usr/bin/env python3
"""Sentinel externo de la Raspberry esclava del atomizador."""

from __future__ import annotations

import json
import subprocess
import time
from datetime import datetime, timedelta
from pathlib import Path


CHECK_EVERY = 10
FAILS_REQUEST_SAFE_RETURN = 3
FAILS_RESTART_STACK = 5
FAILS_REBOOT = 8

SLAVE_UNIT = "atm-slave.service"
LINK_UNIT = "atm-link-slave.service"
HEALTH_PATH = Path("/run/atm/slave_health.json")
CRITICAL_STATES = {"MOVING", "LOWERING_ATOMIZER", "SPRAYING_ASCENT", "RETURNING"}


def run(cmd: list[str]) -> str:
    return subprocess.check_output(cmd, text=True, stderr=subprocess.STDOUT)


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


def critical_operation(health: dict) -> bool:
    if not health:
        return False
    if bool(health.get("critical_operation", False)):
        return True
    return health.get("state") in CRITICAL_STATES


def at_base(health: dict) -> bool:
    return bool(health.get("at_base", False))


def link_ok(health: dict, link_state: str) -> bool:
    return bool(health.get("link_ok", False)) and link_state == "running_ok"


def stack_ok(health: dict, stack_state: str) -> bool:
    if stack_state != "running_ok":
        return False
    return "state" in health


def log(message: str) -> None:
    print(f"[atm-slave-sentinel] {message}", flush=True)


def restart_unit(unit: str) -> None:
    subprocess.call(["/bin/systemctl", "restart", unit])


def reboot_machine() -> None:
    subprocess.call(["/sbin/reboot", "-f"])


def request_safe_return() -> None:
    # Punto de anclaje para una futura integración más fuerte con ROS 2 o con un
    # helper local. Por ahora dejamos journald como evidencia de la política.
    log("Solicitando retorno seguro a base (placeholder de integración).")


def main() -> None:
    fails = 0

    while True:
        health = load_health()
        stack_state = classify(SLAVE_UNIT)
        link_state = classify(LINK_UNIT)

        app_ok = stack_ok(health, stack_state)
        comms_ok = link_ok(health, link_state)
        in_critical = critical_operation(health)

        if stack_state == "manual_stop":
            log(f"{SLAVE_UNIT} detenido manualmente. Se suspende recuperación automática.")
            fails = 0
            time.sleep(CHECK_EVERY)
            continue

        healthy = app_ok and comms_ok
        if healthy:
            if fails:
                log(f"Esclava recuperada. Reset de fallos {fails}->0.")
            fails = 0
            time.sleep(CHECK_EVERY)
            continue

        fails += 1
        log(
            f"Fallo {fails}: stack_state={stack_state}, link_state={link_state}, "
            f"state={health.get('state', 'UNKNOWN')}, at_base={health.get('at_base')}"
        )

        if in_critical and fails == FAILS_REQUEST_SAFE_RETURN:
            request_safe_return()
        elif not in_critical and fails == FAILS_REQUEST_SAFE_RETURN:
            request_safe_return()
        elif fails == FAILS_RESTART_STACK and at_base(health):
            log(f"Reiniciando stack esclava {SLAVE_UNIT} al estar en base.")
            restart_unit(SLAVE_UNIT)
        elif fails >= FAILS_REBOOT and at_base(health):
            log("Umbral final alcanzado y robot en base. Reboot de esclava.")
            reboot_machine()

        time.sleep(CHECK_EVERY)


if __name__ == "__main__":
    main()
