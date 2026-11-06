#include "cart.h"

bool cart_read(Cartridge* cart, char* filepath){
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
    
    cart->rom_data = (uint8_t*)malloc(sz);

    fread(cart->rom_data, sizeof(uint8_t), sz, fp);

    return true;
}

void cart_print_info(Cartridge* cart){

    for(int i=0; i < 16; i++)
    {
        cart->title[i] = *(cart->rom_data + i + 0x134);
    }

    printf("Title: %s", cart->title);
}


void cart_unload(Cartridge* cart){
    free(cart->rom_data);
}
