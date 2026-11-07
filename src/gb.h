#ifndef GB_H
#define GB_H

#include <stdint.h>
#include <stdbool.h>

typedef struct CPU{
    union {
        struct {
            uint16_t AF, BC, DE, HL;
        }reg16;
        
        struct {
            uint8_t F, A, C, B, E, D, L, H;
        }reg8;
    };

    uint16_t SP, PC;

    bool HLT, IME;

    int num_mem_accesses;
    struct mem_access mem_accesses[16];

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

    uint8_t total_cycles;
    bool running;
}GB;

#endif
