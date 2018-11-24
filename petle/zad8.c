/* 8. Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim. Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji putchar('*') (powodującej wyświetlanie ich obok siebie). Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.

*       ****    ****       *
**      ***      ***      **
***     **        **     ***
****    *          *    ****

*/

#include <stdio.h>

void trojkat_1(int x, int y, int i)
{

  for (x = 4; x > 0; x--)
  {
    for (y = 5; y >= x; y--)
    {
      if (x != y)
      {
        putchar('*');
      }
      else
      {
        putchar('\n');
      }
    }
  }

  printf("\n");
}
void trojkat_2(int x, int y, int i)
{
  for (x = 4; x >= 0; x--)
  {
    for (y = 0; y <= x; y++)
    {
      if (x != y)
      {
        putchar('*');
      }
      else
      {
        putchar(' ');
        putchar('\n');
      }
    }
  }
}

void trojkat_3(int x, int y, int i)
{
  for (x = 4; x > 0; x--)
  {
    i = 4 - x;
    for (y = 0; y < i; y++)
      putchar(' ');
    for (y = i; y < 4; y++)
      putchar('*');
    putchar('\n');
  }

  printf("\n");
}
void trojkat_4(int x, int y, int i)
{
  for (x = 4; x > 0; x--)
  {
    i = 5 - x;
    for (y = i; y < 4; y++)
      putchar(' ');
    for (y = 0; y < i; y++)
      putchar('*');
    putchar('\n');
  }
}

int main (void)
{
  int x, y, i;

  trojkat_1(x,y,i);
  trojkat_2(x,y,i);
  trojkat_3(x,y,i);
  trojkat_4(x,y,i);
}
