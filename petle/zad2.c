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

void znak(int x, int y)
{
    for (x = 1; x <= 8; x++)
    {
        for (y = 1; y <= 8; y++)
        {
            if (x % 2 != 0)
            {
                printf("* ");
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}

int main()
{
    int x, y;

    znak(x,y);
}
