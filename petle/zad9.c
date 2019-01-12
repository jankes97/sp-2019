/*
9. Napisz program monożący liczby tak jak to pokazano w tym filmiku 
A Night Of Numbers – Go Forth And Multiply.
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int x, y, i, z;
    int a = 1;
    int b = 0;
    int d = 0;
    int c = 1;
    int tab[b];
    int tab2[d];

    printf("Podaje liczby do mnożenia: ");
    scanf("%d %d", &x, &y);

    for(i=1; x >= i; x = x / 2)
    {
        z = y * a;
        
        printf("%d | %d\n", x, z);
        
        a = a * 2;

        if (x < 25)
        {
            tab[b] = x;
            tab2[d] = tab[b];
            printf("tab[%d] = %d \n", c, tab[b]);
            printf("TAB2[%d] = %d \n",d, tab2[d]);
            d = d + 1;
            b = b + 1;
            c++;
        }
    }
    int q;
    for (q=0; q<=b; q++)
    {
        printf("q = %d || tablica = %d \n",q, tab[b]);
    }
}
