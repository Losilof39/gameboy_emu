#ifndef CORE_C
#define CORE_C

#include "gb.h"


bool core_startup( GB* gb, char* fp);

void core_mainloop( GB* gb);

void core_cleanup( GB* gb);

#endif
