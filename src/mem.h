#ifndef MEM_H
#define MEM_H

#include <stdint.h>
#include <stdbool.h>
#include "gb.h"

bool mem_load_rom(MEMORY* mem, char* filepath);
void mem_unload_rom(MEMORY* mem);

void mem_read(MEMORY* mem, uint16_t addr);
void mem_write(MEMORY* mem, uint16_t addr, uint8_t data);

#endif
