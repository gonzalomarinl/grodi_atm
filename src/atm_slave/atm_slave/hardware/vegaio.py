"""Adaptador GPIO basado en el módulo vegaio de Vega11."""

from __future__ import annotations

try:
    from gpiozero import Device, DigitalInputDevice, OutputDevice, PWMOutputDevice
    from gpiozero.pins.lgpio import LGPIOFactory

    Device.pin_factory = LGPIOFactory()
    _GPIO_AVAILABLE = True
except Exception:  # pragma: no cover - depende del entorno hardware real
    Device = None
    DigitalInputDevice = None
    OutputDevice = None
    PWMOutputDevice = None
    LGPIOFactory = None
    _GPIO_AVAILABLE = False


def gpio_available() -> bool:
    return _GPIO_AVAILABLE


class DigitalOut:
    def __init__(self, pin, active_high=True, initial_value=False):
        if not _GPIO_AVAILABLE:
            raise RuntimeError("gpiozero/lgpio no disponible en este entorno.")
        self.dev = OutputDevice(pin=pin, active_high=active_high, initial_value=initial_value)

    def on(self):
        self.dev.on()

    def off(self):
        self.dev.off()

    def set(self, value: bool):
        self.dev.value = 1.0 if value else 0.0

    def close(self):
        self.dev.close()


class PWMOut:
    def __init__(self, pin, frequency=1000, initial_value=0.0):
        if not _GPIO_AVAILABLE:
            raise RuntimeError("gpiozero/lgpio no disponible en este entorno.")
        self.dev = PWMOutputDevice(pin=pin, frequency=frequency, initial_value=initial_value)

    def setDuty(self, duty: float):
        self.dev.value = max(0.0, min(1.0, duty))

    def setFreq(self, frequency: float):
        self.dev.frequency = frequency

    def on(self):
        self.dev.value = 1.0

    def off(self):
        self.dev.value = 0.0

    def close(self):
        self.dev.close()


class DigitalIn:
    def __init__(self, pin, pull_up=None, bounce_time=None, nc=False):
        if not _GPIO_AVAILABLE:
            raise RuntimeError("gpiozero/lgpio no disponible en este entorno.")
        self._nc = nc
        self.dev = DigitalInputDevice(pin=pin, pull_up=pull_up, bounce_time=bounce_time)

    @property
    def value(self):
        return not bool(self.dev.value) if self._nc else bool(self.dev.value)

    def wait_for_active(self, timeout=None):
        return self.dev.wait_for_active(timeout)

    def wait_for_inactive(self, timeout=None):
        return self.dev.wait_for_inactive(timeout)

    def close(self):
        self.dev.close()
