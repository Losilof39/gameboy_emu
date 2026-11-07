#include "cpu.h"
#include "instructions.h"
#include <stdio.h>

extern instruction instruction_set[NUM_ISTR];

// fetch next instruction and update the program counter (pc)
uint8_t cpu_fetch(GB* gb)
{
    uint8_t* rom_data;
    uint8_t opcode;

    rom_data = gb->mem.rom_data;

    opcode = rom_data[gb->cpu.pc];

    gb->cpu.pc = gb->cpu.pc + 1;

    return opcode;
}

uint8_t cpu_step(GB* gb){
    
    instruction* istr;
    uint8_t opcode;

    opcode = cpu_fetch(gb);
    istr = &instruction_set[opcode];

    if( !istr->func(gb) ){
        printf("Unimplemented opcode: %.4x\n", opcode);
        gb->running = false;
        return 0;
    }

    return istr->func(gb);
}
