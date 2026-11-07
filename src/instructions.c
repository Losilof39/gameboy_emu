#include "instructions.h"
#include "cpu.h"

const instruction instruction_set[NUM_ISTR] = {
    [0x00] = {"NOP",         1, NOP},
    [0x01] = {"LD BC,nn",    3, LD_BC},
    [0x02] = {"LD (BC),A",   1, LD_BC_A},
    [0x03] = {"INC BC",      1, INC_BC},
    [0x04] = {"INC B",       1, INC_B},
    [0x05] = {"DEC B",       1, DEC_B},
    [0x06] = {"LD B,n",      2, LD_B},
    [0x07] = {"RLCA",        1, RLCA},
    [0x08] = {"LD (nn),SP",  3, LD_SP},
    [0x09] = {"ADD HL,BC",   1, ADD_HL_BC},
    [0x0A] = {"LD A,(BC)",   1, LD_A_BC},
    [0x0B] = {"DEC BC",      1, DEC_BC},
    [0x0C] = {"INC C",       1, INC_C},
    [0x0D] = {"DEC C",       1, DEC_C},
    [0x0E] = {"LD C,n",      2, LD_C},
    [0x0F] = {"RRCA",        1, RRCA},
};

uint8_t NOP( GB* gb)
{
    return 4;
}

uint8_t LD_BC( GB* gb)
{
    uint8_t lo = cpu_fetch(gb);
    uint8_t hi = cpu_fetch(gb);
    gb->cpu.reg16.BC = (hi << 8) | lo;
    return 12;
}

uint8_t LD_BC_A( GB* gb)
{
    return 4;
}

uint8_t INC_BC( GB* gb)
{
    return 4;
}

uint8_t INC_B( GB* gb)
{
    return 4;
}

uint8_t DEC_B( GB* gb)
{
    return 4;
}

uint8_t LD_B( GB* gb)
{
    return 4;
}

uint8_t RLCA( GB* gb)
{
    return 4;
}

uint8_t LD_SP( GB* gb)
{
    return 4;
}

uint8_t ADD_HL_BC( GB* gb)
{
    return 4;
}

uint8_t LD_A_BC( GB* gb)
{
    return 4;
}

uint8_t DEC_BC( GB* gb)
{
    return 4;
}

uint8_t INC_C( GB* gb)
{
    return 4;
}

uint8_t DEC_C( GB* gb)
{
    return 4;
}

uint8_t LD_C( GB* gb)
{
    return 4;
}

uint8_t RRCA( GB* gb)
{
    return 4;
}
