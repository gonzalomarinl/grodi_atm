"""Constantes y ayudas compartidas por los nodos de la maestra."""

MASTER_STATES = {
    "BOOT",
    "IDLE",
    "READY",
    "MISSION_LOADED",
    "EXECUTING",
    "RETURNING_HOME",
    "PURGING",
    "COMPLETED",
    "FAULT",
    "EMERGENCY_STOP",
    "DEGRADED_COMMS",
}

MISSION_TYPES = {
    "GENERAL_STOP_MISSION",
    "SELECTIVE_LINE_MISSION",
}
