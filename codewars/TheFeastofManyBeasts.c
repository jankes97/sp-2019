#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool feast(const char* beast, const char* dish) {

    // <---- hajime!
    if(beast[0] != dish[0])
    {
      return false;
    }
    
    if(beast[strlen(beast)-1] != dish[strlen(dish)-1])
    {
      return false;
    }
    return true;
}
