#ifndef GB_H
#define GB_H

#include "cart.h"
#include "cpu.h"

typedef struct Gameboy{
    Cartridge cart;
    Cpu cpu;
}Gameboy;

#endif
