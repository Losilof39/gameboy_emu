#include "instructions.h"

instruction instruction_set[256] = {
    {"NOP", 0x00, NULL},
    {"LD BC, nn", 0x01, NULL},
    {"LD (BC), A", 0x00, NULL},

};
