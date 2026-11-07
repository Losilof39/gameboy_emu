#include "cpu.h"
#include "instructions.h"


uint8_t cpu_fetch(GB* gb, uint16_t addr)
{
    uint8_t* data;

    if( addr < 0x2000){
        data = gb->mem.rom_data; 
        return data[addr];
    }

    return 0xFF;
}

void cpu_step(GB* gb){

}
