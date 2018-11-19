#include <stdio.h>
int main ()
{
  int x, y, i;

  for (x=4; x>0; x--)
  {
    for (y=5; y>=x; y--)
    {
      if (x!=y)
      {
        putchar ('*');
      }
      else
      {
        putchar ('\n');
      }
    }
  }

  printf("\n");

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
