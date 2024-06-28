![Descripción de la imagen](Images/player_stats.png)

# Estadísticas de Jugadores de Fútbol y Baloncesto

Este proyecto en C++ permite registrar y gestionar las estadísticas de jugadores de fútbol y baloncesto.

## Características

- Registro de estadísticas básicas para jugadores de fútbol y baloncesto:
  - Fútbol: Goles, partidos jugados
  - Baloncesto: Puntos, partidos jugados
- Simulación de partidos y actualización automática de estadísticas
- Visualización de estadísticas de los jugadores

## Requisitos

- Compilador C++ (g++ o clang++)
- Sistema operativo compatible (Windows, macOS, Linux)

## Uso

1. Clona el repositorio:
```bash
git clone https://github.com/AnthonyFl27/Player_Stats.git
```
2. Ingresa al repositorio y compila el código:
```bash
cd Player_Stats

g++ -o proyecto main.cpp futbol/futbol.cpp baloncesto/baloncesto.cpp
```
3. Ejecuta el programa:
```bash
./player_stats.cpp
```

4. Observa la salida que muestra las estadísticas de los jugadores de fútbol y baloncesto.

## Estructura del Código

El proyecto está organizado de la siguiente manera:

- `main.cpp`: Punto de entrada del programa, donde se crean y se llaman a los objetos de las clases `Futbol` y `Baloncesto`.
- `futbol_stats.cpp` y `futbol_stats.h`: Implementación de la clase `Futbol` que maneja las estadísticas de los jugadores de fútbol.
- `baloncesto_stats.cpp` y `Baloncesto_stats.h`: Implementación de la clase `Baloncesto` que maneja las estadísticas de los jugadores de baloncesto.

## Contribución

Si deseas contribuir a este proyecto, puedes seguir estos pasos:

1. Haz un fork del repositorio.
2. Crea una nueva rama para tus cambios: `git checkout -b mi-nueva-caracteristica`.
3. Realiza tus modificaciones y pruébalo localmente.
4. Haz commit de tus cambios: `git commit -am 'Agrega nueva característica'`.
5. Sube tus cambios a tu fork: `git push origin mi-nueva-caracteristica`.
6. Crea un nuevo pull request en el repositorio original.

¡Gracias por tu interés en contribuir!
