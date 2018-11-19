/* 3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b. */

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, x;
    printf("Podaj liczbę początkową:\n");
    scanf("%d", &a);
    printf("Podaj liczbę końcową:\n");
    scanf("%d", &b);
    if (a < b)
    {
        for (x = a + 1; x < b; x++)
            printf("%d, ", x);
    }
}
