#include <stdbool.h>
#include <stdlib.h>

bool set_alarm(bool employed, bool vacation) {

    if (employed)
      if (!vacation)
        return true;
    else
      return false;

}