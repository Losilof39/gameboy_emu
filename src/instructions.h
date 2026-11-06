#ifndef INSTRUCTIONS
#define INSTRUCTIONS

#include <stdint.h>

typedef struct instruction {
    char* mnemonic;
    uint8_t opcode;
    void (*istr)(void);
} instruction;

#endif
