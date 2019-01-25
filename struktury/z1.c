/*1. Napisać funkcję rectinrect sprawdzającą, czy prostokąt jest zawarty wewnątrz prostokąta: */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct point
{
  int x;
  int y;
};

struct rect
{
  struct point ll; /* lower left */
  struct point ur; /* upper right */
};

struct point makepoint(int x, int y)
{
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
};

int main()
{
  printf("%d\n", rectinrect());
}


/* rectinrect: zwróć 1 jeśli r1 jest zawarty w r2, 0 — w przeciwnym przypadku */
int rectinrect(struct rect r1, struct rect r)
{
  r1.ll.x = 1;
  r1.ll.y = 1;
  r1.ur.x = 4;
  r1.ur.y = 4;

  r.ll.x = 0;
  r.ur.x = 5;
  r.ll.y = 0;
  r.ur.y = 5;

  return r1.ll.x >= r.ll.x && r1.ur.x < r.ur.x && r1.ll.y >= r.ll.y && r1.ur.y < r.ur.y;
};

