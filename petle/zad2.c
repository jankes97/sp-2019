/* 2. Napisz program wyświetlający poniższą szachownicę:

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <pthread.h>

void znak(int x, int y, int z)
{
    for (x = 1; x <= 8; x++)
    {
        if (x % 2 != 0)
        {
            for (y = 1; y <= 8; y++)
            {
                printf("* ");
            }
        }
        else
        {
            for (z = 1; z <= 8; z++)
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}

int main()
{

    int x, y, z;

    znak(x,y,z);
    return 0;
}
