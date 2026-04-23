#!/usr/bin/env bash
set -e

source /opt/ros/jazzy/setup.bash

if [ -f /workspace/grodi_atm/install/setup.bash ]; then
  source /workspace/grodi_atm/install/setup.bash
fi

exec "$@"
