cmake_minimum_required(VERSION 3.28)
project(pin_ball C)

set(CMAKE_C_STANDARD 23)

add_executable(
        pin_ball main.c
        core/graphic/graphic.h
        core/graphic/graphic.c
)
