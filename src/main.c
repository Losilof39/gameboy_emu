#include "cart.h"

int main(int argc, char** argv){

    // Read ROM and save to buffer
    if( read_rom(argv[1]) == false ){
        return 1;
    }
    
    print_rom_info();

    // Jump to $0100 when booting up 
    
    // I iterate through every instructions
    // Wait x amount of cycles based on the instruction
    // PC = PC + 1
    
    // Cleanup after ourselves
    unload_rom();

    return 0;
}
