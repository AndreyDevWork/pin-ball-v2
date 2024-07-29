cmake_minimum_required(VERSION 3.28)

project(pin_ball C)

set(CMAKE_C_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/core/graphic)
include_directories(${PROJECT_SOURCE_DIR}/core/state)
include_directories(${PROJECT_SOURCE_DIR}/core/ball)
include_directories(${PROJECT_SOURCE_DIR}/core/empty)
include_directories(${PROJECT_SOURCE_DIR}/core/wall)
include_directories(${PROJECT_SOURCE_DIR}/core/player)
include_directories(${PROJECT_SOURCE_DIR}/config)
include_directories(${PROJECT_SOURCE_DIR}/api/game)
include_directories(${PROJECT_SOURCE_DIR}/api/renderer)

add_executable(
        pin_ball
        main.c
        core/graphic/graphic.c
        core/state/state.c
        config/settings.c
        api/game/game.c
        api/renderer/renderer.h
        api/renderer/renderer.c
        core/ball/ball.h
        core/ball/ball.c
        core/wall/wall.h
        core/wall/wall.c
        core/empty/empty.h
        core/empty/empty.c
        core/player/player.h
        core/player/player.c
)