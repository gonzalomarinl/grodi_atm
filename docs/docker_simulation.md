# Simulación del atomizador con Docker Desktop

Esta guía prepara el `workspace` para ejecutar la simulación en Docker Desktop sin modificar los paquetes reales del robot.

## Qué se ha preparado

- `docker/Dockerfile.simulation`
  - construye una imagen con ROS 2 Jazzy
  - instala dependencias del workspace mediante `rosdep`
  - compila `atm_interfaces`, `atm_link`, `atm_logging`, `atm_master`, `atm_slave` y `atm_simulation`

- `compose.simulation.yaml`
  - `atm_sim_headless`: arranque recomendado y más robusto
  - `atm_sim_gui`: arranque con GUI de Gazebo si Docker Desktop está funcionando sobre WSLg

- `docker/ros_entrypoint_sim.sh`
  - carga `/opt/ros/jazzy`
  - carga el `install/setup.bash` del workspace ya compilado

## Modos disponibles

### 1. Modo headless

Es el más seguro para arrancar todo el stack dentro del contenedor.

```bash
docker compose -f compose.simulation.yaml up --build atm_sim_headless
```

Este modo levanta:

- Gazebo Sim en modo servidor
- `atm_master`
- `atm_slave`
- visualizador del stack real
- consola del stack real

### 2. Modo GUI

Este modo intenta abrir la interfaz gráfica de Gazebo. Está pensado para Docker Desktop usando backend WSL2 con WSLg activo.

```bash
docker compose -f compose.simulation.yaml --profile gui up --build atm_sim_gui
```

Si la GUI no aparece o falla el renderizado, usa el modo `headless`.

## Qué launch se ejecuta

En ambos casos se arranca:

```bash
ros2 launch atm_simulation atomizer_real_stack.launch.py
```

En el perfil GUI se sobreescribe `gz_args` para arrancar Gazebo sin `-s`, es decir, con interfaz gráfica.

## Notas importantes

- No se ha modificado `atm_master`, `atm_slave` ni `atm_link` para Docker.
- La simulación sigue usando las interfaces reales del sistema:
  - `mission/arm_system`
  - `mission/execute`
  - `mission/emergency_stop`
  - `mission/reset_fault`
  - `mission/get_system_state`
  - `mission/state`
  - `slave/status`
  - `master/status`
  - `master/reel_status`
  - `link/diagnostics`

- El `world` de Gazebo sigue siendo el simplificado del paquete `atm_simulation`.

## Recomendación práctica

Para la primera prueba en Docker Desktop:

1. Ejecuta `atm_sim_headless`
2. Comprueba que el stack arranca y la consola aparece
3. Si todo va bien, prueba `atm_sim_gui`

## Limpieza

Para parar y borrar contenedores:

```bash
docker compose -f compose.simulation.yaml down
```
