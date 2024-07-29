cmake_minimum_required(VERSION 3.28)

project(pin_ball C)

# Устанавливаем стандарт C
set(CMAKE_C_STANDARD 23)

# Указываем директории, где находятся заголовочные файлы
include_directories(${PROJECT_SOURCE_DIR}/core/graphic)
include_directories(${PROJECT_SOURCE_DIR}/core/state)
include_directories(${PROJECT_SOURCE_DIR}/config)
include_directories(${PROJECT_SOURCE_DIR}/api)

# Указываем исходные файлы и создаем исполняемый файл
add_executable(
        pin_ball
        main.c
        core/graphic/graphic.c
        core/state/state.c
        config/settings.c
        api/game.c
)