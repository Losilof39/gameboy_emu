#include "core.h"
#include "cpu.h"
#include "mem.h"
#include "instructions.h"


bool core_startup( GB* gb, char* fp){
    // Read ROM and save to buffer
    return mem_load_rom(&gb->mem, fp);
}

void core_mainloop( GB* gb){
    // Jump to $0100 when booting up 
    
    // Iterate through every instructions
    // Wait x amount of cycles based on the instruction

}

void core_cleanup( GB* gb){
    mem_unload_rom(&gb->mem);
}
