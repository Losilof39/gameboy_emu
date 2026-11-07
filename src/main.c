#include "gb.h"
#include "mem.h"

static GB gb = {0};

int main(int argc, char** argv){

    // Read ROM and save to buffer
    if( mem_load_rom(&gb.mem, argv[1]) == false ){
        return 1;
    }

    // Jump to $0100 when booting up 
    
    // Iterate through every instructions
    // Wait x amount of cycles based on the instruction
    // PC = PC + 1
    
    // Cleanup after ourselves
    mem_unload_rom(&gb.mem);

    return 0;
}
