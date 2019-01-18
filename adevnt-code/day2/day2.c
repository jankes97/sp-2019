#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sprawdzanie(int wynik)
{
  FILE *plik = fopen("day2-1.txt", "r");
  FILE *odp;

  int litera;
  int duo = 0;
  int trio = 0;
  int q, w, e, r, t, y, u, i, o, p, a, s, d, f, g, h, j, k, l, z, x, c, v, b, n, m;
  q = 0;
  w = 0;
  e = 0;
  r = 0;
  t = 0;
  y = 0;
  u = 0;
  i = 0;
  o = 0;
  p = 0;
  a = 0;
  s = 0;
  d = 0;
  f = 0;
  g = 0;
  h = 0;
  j = 0;
  k = 0;
  l = 0;
  z = 0;
  x = 0;
  c = 0;
  v = 0;
  b = 0;
  n = 0;
  m = 0;
  while ((litera = fgetc(plik)) != EOF)
  {
    if (litera == 'q') q++;
    if (litera == 'w') ++w;
    if (litera == 'e') ++e;
    if (litera == 'r') ++r;
    if (litera == 't') ++t;
    if (litera == 'y') ++y;
    if (litera == 'u') ++u;
    if (litera == 'i') ++i;
    if (litera == 'o') ++o;
    if (litera == 'p') ++p;
    if (litera == 'a') ++a;
    if (litera == 's') ++s;
    if (litera == 'd') ++d;
    if (litera == 'f') ++f;
    if (litera == 'g') ++g;
    if (litera == 'h') ++h;
    if (litera == 'j') ++j;
    if (litera == 'k') ++k;
    if (litera == 'l') ++l;
    if (litera == 'z') ++z;
    if (litera == 'x') ++x;
    if (litera == 'c') ++c;
    if (litera == 'v') ++v;
    if (litera == 'b') ++b;
    if (litera == 'n') ++n;
    if (litera == 'm') ++m;
    if (litera == '\n')
    {
      if ((q == 2) || (w == 2) || (e == 2) || (r == 2) || (t == 2) || (y == 2) || (u == 2) || (i == 2) || (o == 2) || (p == 2) || (a == 2) || (s == 2) || (d == 2) || (f == 2) || (g == 2) || (h == 2) || (j == 2) || (k == 2) || (l == 2) || (z == 2) || (x == 2) || (c == 2) || (v == 2) || (b == 2) || (n == 2) || (m == 2))
      {
        duo++;
      }
      if ((q == 3) || (w == 3) || (e == 3) || (r == 3) || (t == 3) || (y == 3) || (u == 3) || (i == 3) || (o == 3) || (p == 3) || (a == 3) || (s == 3) || (d == 3) || (f == 3) || (g == 3) || (h == 3) || (j == 3) || (k == 3) || (l == 3) || (z == 3) || (x == 3) || (c == 3) || (v == 3) || (b == 3) || (n == 3) || (m == 3))
      {
        trio++;
      }
      q = 0;
      w = 0;
      e = 0;
      r = 0;
      t = 0;
      y = 0;
      u = 0;
      i = 0;
      o = 0;
      p = 0;
      a = 0;
      s = 0;
      d = 0;
      f = 0;
      g = 0;
      h = 0;
      j = 0;
      k = 0;
      l = 0;
      z = 0;
      x = 0;
      c = 0;
      v = 0;
      b = 0;
      n = 0;
      m = 0;
    }
  }
  fclose(plik);
  wynik = duo * trio;

  odp = fopen("odp2-1.txt", "w+");
  fprintf(odp, "Odpowiedź to: %d\n", wynik);
  fclose(odp);

  return wynik;
}
int main()
{
  int wynik = 0;
  wynik = sprawdzanie(wynik);
  return 0;
}
