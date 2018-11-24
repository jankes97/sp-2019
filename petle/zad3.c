/* 3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b. */

#include <stdio.h>
#include <math.h>

void pomiedzy(int a, int b, int x)
{
    if (a < b)
    {
        for (x = a + 1; x < b; x++)
        {
            if (x == b - 1)
            {
                printf("%d \n", x);
            }
            else
            {
                printf("%d, ", x);
            }
        }
    }
}


int main(void)
{
    int a, b, x;

    printf("Podaj liczbę początkową:\n");
    scanf("%d", &a);
    printf("Podaj liczbę końcową:\n");
    scanf("%d", &b);
    
    pomiedzy(a,b,x);
}
