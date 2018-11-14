/*7. Napisz program, który wczyta liczbę rzeczywistą i wypisze jej odwrotność oraz jej pierwiastek kwadratowy. Program nie powinien obliczać odwrotności liczby 0 oraz pierwiastka z liczby ujemnej. W takiej sytuacji zamiast obliczeń program powinien wypisać odpowiedni komunikat.*/

#include <stdio.h>
#include <math.h>

void liczba_odwrotna(double x)
{
    double z;
    z = 1.0 / x;
    if (x > 0 || x < 0)
    {
        printf("Liczba rzeczywista: %lf \n", x);
        printf("Liczba odwrotna: %lf  \n", z);
    }
    else 
    {
        printf("Błędne dane \n");
    }
    
}

void liczenie_pierwiastka(double x)
{
    double pierwiastek;
    if (x > 0)
    {
        pierwiastek = sqrt(x);
        printf("Pierwiastek kwadratowy: %lf \n", pierwiastek);
    }
    else
    {
        printf("Bład danych \n");
    }
}

int main()
{
  double x, z;
  printf("Podaj liczbe rzeczywista: \n");
  scanf("%lf",&x);
  liczba_odwrotna(x);
  liczenie_pierwiastka(x);
  return 0;
}
