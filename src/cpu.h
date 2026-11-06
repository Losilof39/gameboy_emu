#ifndef CPU_H 
#define CPU_H

#include <stdint.h>
#include <stdbool.h>

typedef struct Cpu{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
    bool z, n, hy, cy;
    uint16_t sp, pc;
}Cpu; 

uint8_t execute(Cpu* cpu, uint8_t opcode);
void cycle();

#endif
