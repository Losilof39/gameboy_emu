#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "gb.h" 

#define CODE_ADDR 0x150
#define NUM_ISTR 256

typedef struct instruction {
    const char* mnemonic;
    uint8_t length;
    uint8_t (*func)(GB* gb);
} instruction;

uint8_t NOP( GB* gb);
uint8_t LD_BC( GB* gb);
uint8_t LD_BC_A( GB* gb);
uint8_t INC_BC( GB* gb);
uint8_t INC_B( GB* gb);
uint8_t DEC_B( GB* gb);
uint8_t DEC_C( GB* gb);
uint8_t LD_B( GB* gb);
uint8_t RLCA( GB* gb);
uint8_t LD_SP( GB* gb);
uint8_t ADD_HL_BC( GB* gb);
uint8_t LD_A_BC( GB* gb);
uint8_t DEC_BC( GB* gb);
uint8_t INC_C( GB* gb);
uint8_t DEC_C( GB* gb);
uint8_t LD_C( GB* gb);
uint8_t RRCA( GB* gb);

#endif
