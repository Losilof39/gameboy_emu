cmake_minimum_required(VERSION 4.3.3)
project(gameboy_emu C)
set(CMAKE_C_STANDARD 99)

set(SOURCES
src/main.c
src/cpu.c
src/cart.c
src/emu.c
)

add_executable(gameboy_emu ${SOURCES})
