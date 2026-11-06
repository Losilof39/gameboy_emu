#include "mem.h"
#include "cart.h"


bool mem_load_rom(Memory* mem, char* filepath){
    FILE *fp;
    size_t sz;
    errno_t error;

    fp = fopen(filepath, "r");
    
    if( fp == NULL ){
        printf("Cannot open rom file: %s", filepath);
        return false;
    }

    fseek(fp, 0L, SEEK_END);
    sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    
    mem->rom_data = (uint8_t*)malloc(sz);

    fread(mem->rom_data, sizeof(uint8_t), sz, fp);

    return true;
}

/*
void mem_cart_print_info(Cartridge* cart){

    for(int i=0; i < 16; i++)
    {
        cart->title[i] = *(cart->rom_data + i + 0x134);
    }

    printf("Title: %s", cart->title);
}*/


void mem_unload_rom(Memory* mem){
    free(mem->rom_data);
}

void mem_read(Memory* mem, uint16_t addr){

}

void mem_write(Memory* mem, uint16_t addr, uint8_t data){

}
