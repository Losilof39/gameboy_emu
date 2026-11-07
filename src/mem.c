#include <stdlib.h> 
#include <stdio.h> 
#include "mem.h"

bool mem_load_rom(MEMORY* mem, char* filepath){
    FILE *fp;
    size_t sz;
    char title[16];

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

    printf("Title: %s", title);

    return true;
}

void mem_unload_rom(MEMORY* mem){
    free(mem->rom_data);
}

uint8_t mem_read(GB* gb, uint16_t addr){
    if (addr < gb->mem.rom_size)
        return gb->mem.rom_data[addr];
    else
        return 0xaa;
}

void mem_write(GB* gb, uint16_t addr, uint8_t data){
    struct mem_access *access = &gb->cpu.mem_accesses[gb->cpu.num_mem_accesses++];
    access->type = MEM_ACCESS_WRITE;
    access->addr = addr;
    access->val = data;
}
