/* FIZZBUZZ
    Wypisz wszystkie liczby od 1 do 100
    Jeśli liczba jest podzielna przez trzy wypisz “Fizz“
    Jeśli liczba jest podzielna przez pięć wypisz “Buzz“
    Jeśli liczba jest podzielna przez trzy i pięć wypisz “FizzBuzz“
*/ 

#include <math.h>
#include <stdio.h>

void fizzbuzz(int i)
{
    int z = 100;

    for (i = 1; i <= z; i = i + 1)
    {
        if (i == 3 || i % 3 == 0)
        {
            printf("Fizz, ");
        }
        if (i == 5 || i % 5 == 0)
        {
            if(i == z)
            {
                printf("Buzz ");
            }
            else
            {
                printf("Buzz, ");
            }
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            printf("%d, ", i);
        }
    }
}

int main(void)
{
    int i;

    fizzbuzz(i);
    printf("\n");
}
