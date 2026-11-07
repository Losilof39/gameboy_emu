#include <stdlib.h> 
#include <stdio.h> 
#include "mem.h"

bool mem_load_rom(MEMORY* mem, char* filepath){
    FILE *fp;
    size_t sz;
    char title[16];
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
    
    for(int i=0; i < 16; i++)
    {
        title[i] = *(mem->rom_data + i + 0x134);
    }

    printf("ROM Title: %s", title);

    return true;
}

void mem_unload_rom(MEMORY* mem){
    free(mem->rom_data);
}

void mem_read(MEMORY* mem, uint16_t addr){

}

void mem_write(MEMORY* mem, uint16_t addr, uint8_t data){

}
