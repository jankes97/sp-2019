#include <math.h>
#include <stdio.h>

void fizzbuzz(int i)
{
    for (i = 1; i <= 100; i = i + 1)
    {
        if (i == 3 || i % 3 == 0)
        {
            printf("Fizz, ");
        }
        if (i == 5 || i % 5 == 0)
        {
            printf("Buzz, ");
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
