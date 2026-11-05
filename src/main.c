#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char** argv){
   
    FILE *fp;
    size_t sz;
    uint8_t *rom;

    if(argc > 1){
        fp = fopen(argv[1], "r");
    }

    if(fp == NULL){
        printf("Cannot open file: %s", argv[1]);
        return 1;
    }
    
    // Read ROM and save to buffer

    fseek(fp, 0L, SEEK_END);
    sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    
    rom = (uint8_t*)malloc(sz);

    // Jump to $0100 when booting up 
    
    // I iterate through every instructions
    // Wait x amount of cycles based on the instruction
    // PC = PC + 1

    free(rom);

    return 0;
}
