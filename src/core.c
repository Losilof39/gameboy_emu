#include <stdio.h>
#include "core.h"
#include "cpu.h"
#include "mem.h"

bool core_startup( GB* gb, char* fp){

    gb->cpu.a = 0x01;
    gb->cpu.f = 0xB0;
    gb->cpu.b = 0x00;
    gb->cpu.c = 0x13;
    gb->cpu.d = 0x00;
    gb->cpu.e = 0xD8;
    gb->cpu.h = 0x01;
    gb->cpu.l = 0x4D;
    gb->cpu.pc = 0x0150;
    //gb->cpu.pc = 0x0100;  CHANGE BACK TO THIS AFTER TESTING THE CPU
    gb->cpu.sp = 0xFFFE;

    gb->running = true;


    // Read ROM and save to buffer
    return mem_load_rom(&gb->mem, fp);
}

void core_mainloop( GB* gb){

    uint8_t cycles;

    while(gb->running){
        cycles = cpu_step(gb);
        gb->total_cycles += cycles;
    }

}

void core_cleanup( GB* gb){
    mem_unload_rom(&gb->mem);
}
