#include <cd/cd.hpp>
#include <unistd.h>
int cd(char* directory){
    if (!chdir(directory)){
        return 1
    }
    return 0
}