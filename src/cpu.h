#ifndef CPU_H 
#define CPU_H

#include "gb.h"

uint8_t cpu_fetch(GB* gb);
uint8_t cpu_step(GB* gb);

#endif
