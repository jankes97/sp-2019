/* 1. Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010. */

#include <stdio.h>
#include <math.h>

void potegi(int x)
{
    while (x <= 2010)
    {
        printf("%d\n", x);
        x = x * 2;
    }
}

int main(void)
{
    int x = 2;
    potegi(x);
}
