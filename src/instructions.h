#ifndef INSTRUCTIONS
#define INSTRUCTIONS

#include <stdint.h>

typedef struct instruction {
    char* mnemonic;
    uint8_t length;
    uint8_t (*istr)(void);
} instruction;

uint8_t NOP();
uint8_t LD_BC();
uint8_t LD_BC_A();
uint8_t INC_BC();
uint8_t INC_B();
uint8_t DEC_B();
uint8_t DEC_C();
uint8_t LD_B();
uint8_t RLCA();
uint8_t LD_SP();
uint8_t ADD_HL_BC();
uint8_t LD_A_BC();
uint8_t DEC_BC();
uint8_t INC_C();
uint8_t DEC_C();
uint8_t LD_C();
uint8_t RRCA();

#endif
