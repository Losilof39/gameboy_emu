#ifndef CART_H
#define CART_H

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

/*
typedef struct rom_info{
    uint8_t title[16];
    uint8_t cbg_flag;
    uint8_t maker_code[2];
    uint8_t sgb_flag;
    uint8_t new_license;
    uint8_t cartridge_type;
    uint8_t rom_type;
    uint8_t ram_size;
    uint8_t destination_code;
    uint8_t old_license_code;
    uint8_t version_number;
    uint8_t header_checksum;
    uint8_t global_checksum[2];
}rom_info;
*/


bool read_rom(char* filepath);
void read_info();
void print_rom_info();
void unload_rom();


#endif
