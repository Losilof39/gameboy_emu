#include "cart.h"

uint8_t *rom_info;
uint8_t *rom_buffer;
uint8_t title[16];

bool read_rom(char* filepath){
    FILE *fp;
    size_t sz;
    
    fp = fopen(filepath, "r");

    if( fp == NULL ){
        printf("Cannot open rom file: %s", filepath);
        return false;
    }

    fseek(fp, 0L, SEEK_END);
    sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    
    rom_buffer = (uint8_t*)malloc(sz);

    return true;
}

void print_rom_info(){

}

void unload_rom(){
    free(rom_buffer);
}
