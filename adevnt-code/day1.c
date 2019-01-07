#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define PLIK "day-1.txt"

void frequency();
void twice();

int main(int argc, char **argv)
{
    frequency();
    twice();
}

void frequency(void)
{
    FILE *dane;
    FILE *odp;
    

    int a, answer;

    dane = fopen(PLIK, "r");
    answer = 0;
    while (fscanf(dane, "%d", &a) != EOF)
    {
        answer = answer + a;
    }
    fclose(dane);

    odp = fopen("odp1-1.txt", "w+");
    fprintf(odp, "Odpowiedź to: %d\n", answer);
    fclose(odp);
    
}

void twice(void)
{
    FILE *dane;
    FILE *odp2;

    int contains(int *arr, int size, int currFreq)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == currFreq)
            {
                return 1;
            }
        }
        return 0;
    }

    dane = fopen(PLIK, "r");
    char buff[100];
    int n = 996;
    int values[n];
    int *arr = (int *)malloc(1000000 * sizeof(int));
    int size = 0;
    char *t = fgets(buff, 100, dane);
    int i = 0;
    while (t != NULL)
    {
        int x = atoi(buff);
        values[i] = x;
        t = fgets(buff, 100, dane);
        i++;
    }
    fclose(dane);

    int currFreq = 0;
    i = 0;

    while (1)
    {
        if (contains(arr, size, currFreq))
        {
            odp2 = fopen("odp1-2.txt", "w+");
            fprintf(odp2,"currFreq = %d was first to be seen twice\n", currFreq);
            fclose(odp2);
            exit(0);
        }
        arr[size] = currFreq;
        size++;

        currFreq += values[i];
        i = (i + 1) % n;
    }
}
