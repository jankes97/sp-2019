/* 2. Napisać funkcję disjointrect sprawdzającą, czy prostokąty są rozłączne: */

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
  printf("%d\n", disjointrect());
}

/* disjointrect: zwróć 1 jeśli r1 jest rozłączny z r2, 0 — w przeciwnym przypadku */
int disjointrect(struct rect r1, struct rect r2)
{
  r1.ll.x = 1;
  r1.ll.y = 1;
  r1.ur.x = 9;
  r1.ur.y = 9;

  r2.ll.x = 10;
  r2.ll.y = 10;
  r2.ur.x = 50;
  r2.ur.y = 50;

  return r1.ll.x != r2.ll.x && r1.ur.x != r2.ur.x && r1.ll.y != r2.ll.y && r1.ur.y != r2.ur.y;
};