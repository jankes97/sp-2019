/*
2. Zamiast komentarzy w programie poniżej wpisz kod tak, aby powstał program, który sprawdza czy podana liczba całkowita jest pierwsza.

#include <stdio.h>

int main()
{
  /* deklaracje zmiennych */
 // printf("Podaj liczbe calkowita: ");
  /* wczytaj tę liczbę do zmiennej n */
  /* sprawdź czy n jest liczbą pierwszą */
 // printf("Podana liczba '%d' jest %s\n",
 // n, jest_pierwsza ? "pierwsza" : "złożona");
 // return 0;
//}

#include <stdio.h>
int main() {
  int n;
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);
  if  (n!=2 && n!=3 && n!=5 && n!=7)
  {
    if (n%2==0 || n%3==0 || n%5==0 || n%7==0)
    {
      printf("Podana liczba '%d' jest %s\n",n, "złożoną");
    }
    else
    {
      printf("Podana liczba '%d' jest %s\n",n, "pierszą");
    }
  }
  else
    {
    printf("Podana liczba '%d' jest %s\n",n, "pierwszą");
    }
  return 0;
}
