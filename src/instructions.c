#include "instructions.h"

instruction instruction_set[256] = {
    {"NOP", 1, NOP},                    //0x00
    {"LD BC, nn", 3, LD_BC},            
    {"LD (BC), A", 0x02, LD_BC_A},
    {"INC BC", 0x03, INC_BC},
    {"INC B", 0x04, INC_B},
    {"DEC B", 0x05, DEC_B},
    {"LD B, n", 0x06, LD_B},
    {"RLCA", 0x07, RLCA},
    {"LD (nn), SP", 0x08, LD_SP},
    {"ADD HL,BC", 0x09, ADD_HL_BC},
    {"LD A,(BC)", 0x0A, LD_A_BC},
    {"DEC BC", 0x0B, DEC_BC},
    {"INC C", 0x0C, INC_C},
    {"DEC C", 0x0D, DEC_C},
    {"LD C,n", 0x0E, LD_C},
    {"RRCA", 0x0F, RRCA}

};

uint8_t NOP()
{
    return 4;
}

uint8_t LD_BC()
{
    return 4;
}

uint8_t LD_BC_A()
{
    return 4;
}

uint8_t INC_BC()
{
    return 4;
}

uint8_t INC_B()
{
    return 4;
}

uint8_t DEC_B()
{
    return 4;
}

uint8_t LD_B()
{
    return 4;
}

uint8_t RLCA()
{
    return 4;
}

uint8_t LD_SP()
{
    return 4;
}

uint8_t ADD_HL_BC()
{
    return 4;
}

uint8_t LD_A_BC()
{
    return 4;
}

uint8_t DEC_BC()
{
    return 4;
}

uint8_t INC_C()
{
    return 4;
}

uint8_t DEC_C()
{
    return 4;
}

uint8_t LD_C()
{
    return 4;
}

uint8_t RRCA()
{
    return 4;
}
