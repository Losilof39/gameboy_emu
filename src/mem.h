#ifndef MEM_H
#define MEM_H

#include <stdint.h>
#include <stdbool.h>

typedef struct Memory{
    uint8_t *rom_data;
    size_t rom_size;

    uint8_t wram[0x2000];
    uint8_t vram[0x2000];
    uint8_t oam[0xA0];
} Memory;

bool mem_load_rom(Memory* mem, char* filepath);
void mem_unload_rom(Memory* mem);

void mem_read(Memory* mem, uint16_t addr);
void mem_write(Memory* mem, uint16_t addr, uint8_t data);

#endif
