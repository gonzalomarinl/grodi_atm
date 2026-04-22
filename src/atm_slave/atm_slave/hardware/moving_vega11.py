# -*- coding: utf-8 -*-
"""Adaptación del módulo moving.py de Vega11 para reutilizarlo dentro de ROS 2."""

from __future__ import annotations

from enum import Enum
from threading import Event, Thread
from time import sleep, time

from atm_slave.hardware import vegaio

T_BACK_MAX = 90
T_FWD_MAX = 780
T_CHARGE_MAX = max(T_BACK_MAX, T_FWD_MAX)
FC_BASE_TIME = 0.3


class RobotPosition(Enum):
    UNKNOWN = 0
    FRONT = 1
    BACK = 2
    BASE = 3


class Moving:
    STOP = 0
    FORWARD = 1
    BACKWARD = 2
    VISION = 6
    BASE = 7
    INICIO = 8
    FINAL = 9
    MAGNET = 10
    CHARGE = 11

    PIN_HALL = 5
    PIN_ENABLE = 12
    PIN_DIR = 19
    PIN_PWM1 = 27
    PIN_FC1 = 6
    PIN_FC2 = 13
    PIN_CHARGE = 26

    def __init__(self, freq=200, base_en_inicio=False, dir_enable=True):
        self.inHall = vegaio.DigitalIn(self.PIN_HALL, pull_up=False, bounce_time=0.01)
        self.outEnable = vegaio.DigitalOut(self.PIN_ENABLE, active_high=False, initial_value=False)
        self.outDir = vegaio.DigitalOut(self.PIN_DIR, active_high=dir_enable, initial_value=False)
        self.outPWM1 = vegaio.PWMOut(self.PIN_PWM1, frequency=freq, initial_value=0.0)
        self.inFC1 = vegaio.DigitalIn(self.PIN_FC1, pull_up=True, bounce_time=0.01, nc=True)
        self.inFC2 = vegaio.DigitalIn(self.PIN_FC2, pull_up=True, bounce_time=0.01, nc=True)
        self.inCharge = vegaio.DigitalIn(self.PIN_CHARGE, pull_up=False, bounce_time=0.01)

        self.enabled = False
        self.magnetStop = False
        self.visionStop = False
        self.stopFlag = False
        self.currentState = self.STOP
        self.freq = freq
        self.stopEvent = Event()
        self.position = RobotPosition.UNKNOWN
        self.base_en_inicio = base_en_inicio
        self.dir_enable = dir_enable
        self.new_order = False
        self.t_state = None
        self.last_state = None
        self.watchdog_origin = RobotPosition.UNKNOWN
        self.watchdog_t0 = None

        self._fc1_active_since = None
        self._fc2_active_since = None
        self._t_fc1_last = 0.0
        self._t_fc2_last = 0.0
        self._fc1_seen = False
        self._fc2_seen = False
        self._t_from_inicio = None

        if self.base_en_inicio:
            self.position = RobotPosition.FRONT

        self.checkStopThread = Thread(target=self.checkStop, daemon=True)
        self.checkStopThread.start()

    def _reset_fc_timers(self):
        self._fc1_active_since = None
        self._fc2_active_since = None
        self._t_fc1_last = 0.0
        self._t_fc2_last = 0.0

    def _reset_seq_flags(self):
        self._fc1_seen = False
        self._fc2_seen = False

    def _update_fc_timers(self, now):
        if self.inFC1.value:
            if self._fc1_active_since is None:
                self._fc1_active_since = now
        else:
            if self._fc1_active_since is not None:
                self._t_fc1_last = now - self._fc1_active_since
            self._fc1_active_since = None

        if self.inFC2.value:
            if self._fc2_active_since is None:
                self._fc2_active_since = now
        else:
            if self._fc2_active_since is not None:
                self._t_fc2_last = now - self._fc2_active_since
            self._fc2_active_since = None

    def _t_fc1(self, now):
        return (now - self._fc1_active_since) if self._fc1_active_since else 0.0

    def _t_fc2(self, now):
        return (now - self._fc2_active_since) if self._fc2_active_since else 0.0

    def _is_base(self, now):
        fc1_over = self._t_fc1(now) >= FC_BASE_TIME
        fc2_over = self._t_fc2(now) >= FC_BASE_TIME
        return fc1_over or fc2_over

    def _start_watchdog_segment(self, origin=None, now=None):
        self.watchdog_origin = self.position if origin is None else origin
        self.watchdog_t0 = time() if now is None else now

    def _current_segment_timeout(self):
        if self.watchdog_origin == RobotPosition.BACK:
            return T_BACK_MAX
        if self.watchdog_origin == RobotPosition.FRONT:
            return T_FWD_MAX
        return None

    def forward(self, stopby=FINAL):
        if self.state_name() == "FINAL":
            return

        self.new_order = True
        self._reset_fc_timers()
        self._reset_seq_flags()

        self.outEnable.on()
        self.outDir.off()
        self.outPWM1.setDuty(0.5)
        self.currentState = self.FORWARD

        if stopby == Moving.VISION:
            self.visionStop = True
        if stopby == Moving.MAGNET:
            while self.inHall.value:
                sleep(0.01)
            sleep(0.5)
            self.magnetStop = True

        sleep(0.3)
        t0 = time()
        while (self.inFC1.value or self.inFC2.value) and (time() - t0 < 1.0):
            sleep(0.02)

        self._reset_fc_timers()
        self._reset_seq_flags()

        if self.position == RobotPosition.BASE:
            self.position = RobotPosition.FRONT

        self._start_watchdog_segment()
        self.new_order = False

    def backward(self, stopby=INICIO):
        if self.state_name() == "INICIO":
            return

        self.new_order = True
        self._reset_fc_timers()
        self._reset_seq_flags()

        self.outEnable.on()
        self.outDir.on()
        self.outPWM1.setDuty(0.5)
        self.currentState = self.BACKWARD

        if stopby == Moving.VISION:
            self.visionStop = True
        if stopby == Moving.MAGNET:
            while self.inHall.value:
                sleep(0.01)
            sleep(0.5)
            self.magnetStop = True

        sleep(0.3)
        t0 = time()
        while (self.inFC1.value or self.inFC2.value) and (time() - t0 < 1.0):
            sleep(0.02)

        self._reset_fc_timers()
        self._reset_seq_flags()

        if self.position == RobotPosition.BASE:
            self.position = RobotPosition.BACK

        self._start_watchdog_segment()
        self.new_order = False

    def gotocharge(self, stopby=FINAL):
        self.new_order = True

        if self.position == RobotPosition.BASE or self.state_name() == "BASE":
            self.currentState = Moving.BASE
            self.new_order = False
            return

        self._reset_fc_timers()
        self._reset_seq_flags()
        self.outEnable.on()

        if self.base_en_inicio:
            self.outDir.on()
        else:
            if self.position == RobotPosition.FRONT:
                self.outDir.on()
            elif self.position == RobotPosition.BACK:
                self.outDir.off()
            elif self.position == RobotPosition.UNKNOWN:
                self.outDir.on()

        self.outPWM1.setDuty(0.5)
        self.currentState = self.CHARGE

        if stopby == Moving.VISION:
            self.visionStop = True
        if stopby == Moving.MAGNET:
            while self.inHall.value:
                sleep(0.01)
            sleep(0.5)
            self.magnetStop = True

        sleep(0.3)
        t0 = time()
        while (self.inFC1.value or self.inFC2.value) and (time() - t0 < 1.0):
            sleep(0.02)

        self._reset_fc_timers()
        self._reset_seq_flags()
        self.new_order = False

    def stop(self, stopby=STOP, slow=False, fc=None):
        if slow:
            ramp = (0.45, 0.4, 0.35, 0.3, 0.25, 0.2, 0.12) if stopby == Moving.BASE else (0.4, 0.25, 0.12)
            for duty in ramp:
                self.outPWM1.setDuty(duty)
                sleep(0.01)

            wait_time = 4 if stopby == Moving.BASE else 2
            t0 = time()
            while time() - t0 < wait_time:
                now = time()
                self._update_fc_timers(now)

                if stopby == Moving.BASE:
                    if fc is not None:
                        if (fc == 1 and self.inFC1.value) or (fc == 2 and self.inFC2.value):
                            self.position = RobotPosition.BASE
                            self.outPWM1.setDuty(0.0)
                            break
                    elif self._is_base(now):
                        self.position = RobotPosition.BASE
                        self.outPWM1.setDuty(0.0)
                        break
                else:
                    if (fc == 1 and self.inFC1.value) or (fc == 2 and self.inFC2.value):
                        self.outPWM1.setDuty(0.0)
                        break

                sleep(0.01)

        self.outPWM1.setDuty(0.0)
        self.magnetStop = False
        self.visionStop = False
        self.currentState = stopby
        self._reset_fc_timers()
        self._reset_seq_flags()
        self._t_from_inicio = None
        if stopby in (self.STOP, self.BASE, self.INICIO, self.FINAL, self.MAGNET, self.VISION):
            self.watchdog_t0 = None

        if stopby == self.BASE:
            self.position = RobotPosition.BASE
            self.watchdog_origin = RobotPosition.BASE
        elif stopby == self.INICIO:
            self.position = RobotPosition.BACK
            self.watchdog_origin = RobotPosition.BACK
        elif stopby == self.FINAL:
            self.position = RobotPosition.FRONT
            self.watchdog_origin = RobotPosition.FRONT
        else:
            self.watchdog_origin = RobotPosition.UNKNOWN

        if not self.enabled:
            if stopby == self.BASE:
                sleep(1)
            self.outEnable.off()

    def base_condition(self):
        if self.new_order or self.base_en_inicio:
            return

        if self.currentState == Moving.FORWARD and self.position == RobotPosition.BACK:
            if self.inFC1.value:
                self._fc1_seen = True
            if self._fc1_seen and self.inFC2.value:
                self.position = RobotPosition.FRONT
                self._start_watchdog_segment(RobotPosition.FRONT)
        elif self.currentState == Moving.BACKWARD and self.position == RobotPosition.FRONT:
            if self.inFC2.value:
                self._fc2_seen = True
            if self._fc2_seen and self.inFC1.value:
                self.position = RobotPosition.BACK
                self._start_watchdog_segment(RobotPosition.BACK)

        if self.currentState in (Moving.VISION, Moving.MAGNET, Moving.STOP, Moving.FORWARD, Moving.BACKWARD):
            return

        now = time()
        if self.currentState == Moving.CHARGE and self.position == RobotPosition.UNKNOWN:
            if not self.inFC2.value and self._t_fc2_last > 0:
                if self._t_fc2_last >= FC_BASE_TIME:
                    return

                self.position = RobotPosition.BACK
                self._reset_fc_timers()
                self.outDir.off()
                self.outPWM1.setDuty(0.5)
                self._t_from_inicio = now
                return

        if self.currentState == Moving.CHARGE and self.position == RobotPosition.BACK and self._t_from_inicio is not None:
            if now - self._t_from_inicio > T_BACK_MAX:
                self.position = RobotPosition.FRONT
                self._t_from_inicio = None
                self._reset_fc_timers()
                self.outDir.on()
                self.outPWM1.setDuty(0.5)

    def checkStop(self):
        while not self.stopEvent.is_set():
            sleep(0.02)

            if self.new_order:
                continue

            now = time()
            self._update_fc_timers(now)

            if self.currentState != self.last_state:
                self.last_state = self.currentState
                self.t_state = now

            if not self.base_en_inicio and self.currentState in (Moving.FORWARD, Moving.BACKWARD, Moving.CHARGE):
                self.base_condition()

            if self.currentState in (self.STOP, self.BASE, self.INICIO, self.FINAL, self.MAGNET, self.VISION):
                continue

            if self.base_en_inicio:
                if (self.inFC2.value or self._is_base(now)) and self.currentState in (Moving.BACKWARD, Moving.CHARGE):
                    self.stop(Moving.BASE, True, 2)
                    continue
            else:
                if self.currentState == Moving.FORWARD:
                    if self.position == RobotPosition.FRONT and self.inFC1.value:
                        self.stop(Moving.FINAL, True, 1)
                        continue

                if self.currentState == Moving.BACKWARD:
                    if self.position == RobotPosition.BACK and self.inFC2.value:
                        self.stop(Moving.INICIO, True, 2)
                        continue

                if self.currentState == Moving.CHARGE:
                    if self.position == RobotPosition.BACK and self.inFC1.value:
                        self.stop(Moving.BASE, True, 1)
                        continue
                    if self.position == RobotPosition.FRONT and self.inFC2.value:
                        self.stop(Moving.BASE, True, 2)
                        continue
                    if self.position == RobotPosition.UNKNOWN and self._is_base(now):
                        self.stop(Moving.BASE, True, None)
                        continue
                    if self.position == RobotPosition.BACK and self._t_from_inicio is not None:
                        if now - self._t_from_inicio > T_BACK_MAX:
                            self.position = RobotPosition.FRONT
                            self._t_from_inicio = None
                            self._reset_fc_timers()
                            self.outDir.on()
                            self.outPWM1.setDuty(0.5)
                            continue

            if self.magnetStop and self.inHall.value:
                self.stop(Moving.MAGNET)
                continue

            if self.visionStop and self.stopFlag:
                self.stop(Moving.VISION)
                self.stopFlag = False
                continue

            if self.currentState == self.CHARGE and not self._is_base(now):
                if self.t_state and (now - self.t_state > T_CHARGE_MAX):
                    self.stop(self.STOP, True, 0)
                    continue

            seg_timeout = self._current_segment_timeout()
            if self.currentState in (self.BACKWARD, self.FORWARD):
                if self.watchdog_t0 and seg_timeout and (now - self.watchdog_t0 > seg_timeout):
                    self.stop(self.STOP, True, 0)
                    continue

    def setStopFlag(self):
        self.stopFlag = True

    def state(self):
        return self.currentState

    def state_name(self):
        mapping = {
            self.STOP: "STOP",
            self.FORWARD: "FORWARD",
            self.BACKWARD: "BACKWARD",
            self.VISION: "VISION",
            self.BASE: "BASE",
            self.INICIO: "INICIO",
            self.FINAL: "FINAL",
            self.MAGNET: "MAGNET",
            self.CHARGE: "CHARGE",
        }
        return mapping.get(self.state(), f"UNKNOWN({self.state()})")

    def position_name(self):
        return self.position.name

    def fc_state(self) -> dict[str, bool]:
        return {
            "fc1": bool(self.inFC1.value),
            "fc2": bool(self.inFC2.value),
            "hall": bool(self.inHall.value),
            "charge": bool(self.inCharge.value),
        }

    def enable(self):
        self.outEnable.on()
        self.enabled = True

    def disable(self):
        self.outEnable.off()
        self.enabled = False

    def close(self):
        self.stopEvent.set()
        self.stop()
        self.checkStopThread.join()
        self.outPWM1.close()
        self.outDir.close()
        self.outEnable.close()
        self.inHall.close()
        self.inFC1.close()
        self.inFC2.close()
        self.inCharge.close()
