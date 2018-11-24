/* 7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, a następnie wypisze liczbę liczb dodatnich w niej zawartych. */

#include <stdio.h>

int main ()
  {
    int i,tab[6], plus;

    printf("Podaj liczbe: ");
    for(i=0; i<6; i=i+1)
      {
        scanf("%d",&tab[i]);
      }
      plus=0;
      for(i=0; i<6; i=i+1)
      {
        if(tab[i]>=0)
        {
          plus++;
        }

      }

  printf("Liczba licz dodatnich: %d\n",plus);
  };
