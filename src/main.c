#include "core.h"

static GB gb = {0};

int main(int argc, char** argv){
    
    if(core_startup(&gb, argv[1]) == false)
        return 1;
    
    core_mainloop(&gb);
    
    // Cleanup after ourselves
    core_cleanup(&gb);

    return 0;

}
