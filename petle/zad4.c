/* 4. Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie. */

#include <stdio.h>
int main()
{
    int i, n, x;
    x = 0;
    n = 1;
    printf("Podaj liczbę: ");
    scanf("%d", &i);
    if (i<0)
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
