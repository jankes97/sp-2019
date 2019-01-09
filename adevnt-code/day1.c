#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define PLIK "dane1.txt"

int frequency(int ile)
{
  FILE *dane;
  FILE *odp;

  int a, answer;

  dane = fopen(PLIK, "r");
  answer = 0;
  while (fscanf(dane, "%d", &a) != EOF)
  {
    answer = answer + a;
    ile++;
  }
  fclose(dane);

  odp = fopen("freq.txt", "w+");
  fprintf(odp, "Odpowiedź to: %d\n", answer);
  fclose(odp);

  return ile;
}

int twice(int ile)
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
  int n = ile;
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
      odp2 = fopen("twice.txt", "w+");
      fprintf(odp2, "currFreq = %d was first to be seen twice\n", currFreq);
      fclose(odp2);
      printf("currFreq = %d\n", currFreq);
      exit(0);
    }
    arr[size] = currFreq;
    size++;

    currFreq += values[i];
    i = (i + 1) % n;
  }
}

int main()
{
  int ile = 0;
  ile = frequency(ile);
  twice(ile);
}
