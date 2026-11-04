cmake_minimum_required(VERSION 4.3.3)
project(gameboy_emu C)
set(CMAKE_C_STANDARD 90)

set(SOURCES
src/main.c
src/sm83.c
)

add_executable(gameboy_emu ${SOURCES})
