#include <stdio.h>
#include "cpu.h"
#include "instructions.h"
#include "mem.h"

extern const instruction instruction_set[NUM_ISTR];

// fetch next instruction and update the program counter (pc)
uint8_t cpu_fetch(GB* gb)
{
    uint8_t opcode;

    opcode = mem_read(gb, gb->cpu.PC);

    gb->cpu.PC = gb->cpu.PC + 1;

    return opcode;
}

uint8_t cpu_step(GB* gb){
    
    instruction* istr;
    uint8_t opcode;

    opcode = cpu_fetch(gb);
    istr = &instruction_set[opcode];

    if(!istr->func)
        return 0;

    return istr->func(gb);

}
