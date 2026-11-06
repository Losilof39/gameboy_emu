#include "gb.h"

static Gameboy gb = {0};

int main(int argc, char** argv){

    // Read ROM and save to buffer
    if( cart_read(&gb.cart, argv[1]) == false ){
        return 1;
    }
    
    cart_print_info(&gb.cart);

    // Jump to $0100 when booting up 
    
    // Iterate through every instructions
    // Wait x amount of cycles based on the instruction
    // PC = PC + 1
    
    // Cleanup after ourselves
    cart_unload(&gb.cart);

    return 0;
}
