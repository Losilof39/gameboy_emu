#ifndef MEM_H
#define MEM_H

#include <stdint.h>
#include <stdbool.h>
#include "gb.h"

bool mem_load_rom(MEMORY* mem, char* filepath);
void mem_unload_rom(MEMORY* mem);

uint8_t mem_read(GB* gb, uint16_t addr);
void mem_write(GB* gb, uint16_t addr, uint8_t data);

#endif
