/*4. Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.*/

#include <stdio.h>

void Silnia(int i, int n, int x)
{
    while (n <= i)
    {
        x = x * n;

        n++;
    }
    printf("%d\n", x);
}

int main(void)
{
    int i, n, x;
    x = 1;
    n = 1;
    printf("Podaj liczbę: ");
    scanf("%d", &i);
    Silnia(i, x, n);
}
