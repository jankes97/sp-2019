/*Napisz program, który wczyta liczbę rzeczywistą i wypisze jej pierwiastek kwadratowy. W wypadku podania liczby ujemnej, program powinien wypisać komunikat o błędzie oraz zakończyć działanie.*/

#include <stdio.h>
#include <math.h>

void liczenie_pierwiastka(double x)
{
  double pierwiastek;

  if (x > 0)
  {
    pierwiastek = sqrt(x);
    printf("Pierwiastek kwadratowy: %lf\n", pierwiastek);
  }
  else
  {
    printf("Bład danych \n");
  }
}

int main()
{
  double x;
  printf("Podaj liczbe rzeczywista: \n");
  scanf("%le", &x);
  liczenie_pierwiastka(x);
}
