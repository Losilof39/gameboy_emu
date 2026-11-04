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


    fseek(fp, 0L, SEEK_END);
    sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    
    rom = (uint8_t*)malloc(sz);

    free(rom);

    return 0;
}
