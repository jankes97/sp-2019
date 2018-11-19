#include <math.h>
#include <stdio.h>

int main(void)
{
    int i;

    for (i=1; i<=100; i=i+1)
    {
        if (i == 3 || i%3==0)
        {
            printf("Fizz");
        }
        if (i == 5 || i%5==0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d, ", i);
        }
    }
}