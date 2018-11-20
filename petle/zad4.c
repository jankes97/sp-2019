/* 4. Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie. */

#include <stdio.h>

void Suma(int i, int n, int x)
{
    if (i < 0)
    {
        printf("Błędne dane.\n");
    }
    else
    {
        while (n <= i)
        {
            x = x + n;

            n++;
        }
        printf("%d\n", x);
    }
}

int main(void)
{
    int i, n, x;
    x = 0;
    n = 1;
    printf("Podaj liczbę: ");
    scanf("%d", &i);
    Suma(i, n, x);
}
