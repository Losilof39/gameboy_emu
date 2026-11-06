#ifndef GB_H
#define GB_H

#include "mem.h"
#include "cpu.h"

typedef struct Gameboy{
    Cpu cpu;
    Memory mem;
}Gameboy;

#endif
