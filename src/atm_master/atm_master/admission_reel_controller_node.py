"""Compatibilidad con el antiguo nombre del nodo del carrete de admisión."""

from atm_master.ground_reel_motor_node import GroundReelMotorNode as AdmissionReelControllerNode
from atm_master.ground_reel_motor_node import main


__all__ = ["AdmissionReelControllerNode", "main"]
