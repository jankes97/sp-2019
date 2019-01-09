#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void part1();
void part2();

int main(void)
{
  part1(); 
  part2(); 
}

void part1(void)
{
  int r0, r1, r2, r3, r4, r5;
  r0 = 0;
  r1 = 0;
  r2 = 0;
  r3 = 0;
  r4 = 0; 
  r5 = 0;

  while(r3 <= 35)
  {
    switch(r3)
    {
      case 0: r3 = r3 + 16; break;
      case 1: r5 = 1; break;
      case 2: r2 = 1; break;
      case 3: r1 = r5 * r2; break;
      case 4: r1 = r1 == r4; break;
      case 5: r3 = r1 + r3; break;
      case 6: r3 = r3 + 1; break;
      case 7: r0 = r5 + r0; break;
      case 8: r2 = r2 + 1; break;
      case 9: r1 = r2 > r4; break;
      case 10: r3 = r3 + r1; break;
      case 11: r3 = 2; break;
      case 12: r5 = r5 + 1; break;
      case 13: r1 = r5 > r4; break;
      case 14: r3 = r1 + r3; break;
      case 15: r3 = 1; break;
      case 16: r3 = r3 * r3; break;
      case 17: r4 = r4 + 2; break;
      case 18: r4 = r4 * r4; break;
      case 19: r4 = r3 * r4; break;
      case 20: r4 = r4 * 11; break;
      case 21: r1 = r1 + 6; break;
      case 22: r1 = r1 * r3; break;
      case 23: r1 = r1 + 10; break;
      case 24: r4 = r4 + r1; break;
      case 25: r3 = r3 + r0; break;
      case 26: r3 = 0; break;
      case 27: r1 = r3; break;
      case 28: r1 = r1 * r3; break;
      case 29: r1 = r3 + r1; break;
      case 30: r1 = r3 * r1; break;
      case 31: r1 = r1 * 14; break;
      case 32: r1 = r1 * r3; break;
      case 33: r4 = r4 + r1; break;
      case 34: r0 = 0; break;
      case 35: r3 = 0; break;
    }
    r3 += 1;
  }
  printf("%d\n",r0);
}

void part2(void)
{
  int r0, r4, r5;

  r0 = 0;
  r4 = 19 * 4 * 11 + (6 * 22) + 10 + 32 * 14 * 30 * (29 + (27 * 28));
  r5 = 1;

  do
  {
    if (r4 % r5 == 0)
    {
      r0 = r5 + r0;
    }
    r5 = r5 + 1;
  } 
  while (r5 <= r4);

  printf("%d\n", r0);
}