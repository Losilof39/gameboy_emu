#ifndef GB_H
#define GB_H

#include <stdint.h>
#include <stdbool.h>

typedef struct CPU{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
    uint8_t f;
    uint16_t sp, pc;
}CPU; 

typedef struct MEMORY{
    uint8_t *rom_data;
    size_t rom_size;

    uint8_t wram[0x2000];
    uint8_t vram[0x2000];
    uint8_t oam[0xA0];
} MEMORY;

typedef struct GB{
    CPU cpu;
    MEMORY mem;
}GB;

#endif
