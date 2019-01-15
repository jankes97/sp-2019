#include <stddef.h>
#include <stdlib.h>

char *decode(const unsigned char *code, size_t n, unsigned key)
{
  char *p = (char *)malloc(sizeof(char) * (n + 1));
  for (int i = 0; i < n; i++)
  {
    p[i] = code[i];
  }
  unsigned tmp = key;
  int keta = 0;
  do
  {
    keta += 1;
    tmp /= 10;
  } while (tmp > 0);
  int *q = (int *)malloc(sizeof(int) * (keta));
  tmp = key;
  for (int i = 0; i < keta; i++)
  {
    q[keta - 1 - i] = (tmp % 10);
    tmp /= 10;
  }
  for (int i = 0; i < n; i++)
  {
    p[i] -= q[i % keta];
    p[i] += 'a' - 1;
  }
  p[n] = '\0';
  free(q);
  return p;
}