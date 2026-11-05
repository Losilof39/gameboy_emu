#include "cart.h"

uint8_t *rom_info;
uint8_t *rom_buffer;
char title[16];

bool read_rom(char* filepath){
    FILE *fp;
    size_t sz;
    errno_t error;
    
    error = fopen_s(&fp, filepath, "r");

    if( error == true ){
        printf("Cannot open rom file: %s", filepath);
        return false;
    }

    fseek(fp, 0L, SEEK_END);
    sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    
    rom_buffer = (uint8_t*)malloc(sz);

    fread(rom_buffer, sizeof(uint8_t), sz, fp);

    return true;
}

void print_rom_info(){

    for(int i=0; i < 16; i++)
    {
        title[i] = *(rom_buffer + i + 0x134);
    }

    printf("Title: %s", title);
}


void unload_rom(){
    free(rom_buffer);
}
