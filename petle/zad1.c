/* 1. Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010. */

#include <stdio.h>
#include <math.h>

int main()
{
    int x = 2;
    
    while (x <= 2010)
    {
        printf("%d\n", x);
        x = x * 2;
    }
    return 0;
}
