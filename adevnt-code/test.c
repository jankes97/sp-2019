#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void frequency();

int main(void)
{
    
    int x, answer, a;

    frequency(a, answer, x);
    // twice();
}

void frequency()
{
    int x, a, answer;
    int i, j; 
    int tablica1[995] = { };
    int tablica2[995] = { };

    int ilosc = 1 ; 

    for (x = 1; x <= 996; x++)
    {
        scanf("%d", &a);

        answer = answer + a;

        tablica1[i] = answer;
        i++;
    }
    //printf("Odpowiedź to: %d\n", answer);

    for (i = 0; i <= 995; i++)
    {
        for (j = 0; j <= ilosc; j++)
        {
            if (tablica1[i] == tablica2[j])
            {
                printf("Odp 2: %d\n", tablica1[i]);
            }
            if (tablica1[i] != tablica2[j])
            {
                tablica2[j + 1] = tablica1[i];
            }
            ilosc++;
        }
    }
}