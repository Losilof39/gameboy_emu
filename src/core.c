#include "core.h"
#include "cpu.h"
#include "mem.h"
#include "instructions.h"


bool core_startup( GB* gb, char* fp){

    gb->cpu.a = 0x01;
    gb->cpu.f = 0x00;
    gb->cpu.b = 0xFF;
    gb->cpu.c = 0x13;
    gb->cpu.d = 0x00;
    gb->cpu.e = 0xC1;
    gb->cpu.h = 0x84;
    gb->cpu.l = 0x03;
    gb->cpu.pc = 0x0150;
    //gb->cpu.pc = 0x0150;  CHANGE BACK TO THIS AFTER TESTING THE CPU
    gb->cpu.sp = 0xFFFE;


    // Read ROM and save to buffer
    return mem_load_rom(&gb->mem, fp);
}

void core_mainloop( GB* gb){

    while(1)
    {

    }
    // Jump to $0100 when booting up 
    
    // Iterate through every instructions
    // Wait x amount of cycles based on the instruction

}

void core_cleanup( GB* gb){
    mem_unload_rom(&gb->mem);
}
