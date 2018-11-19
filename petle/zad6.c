/* 6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy */

#include <stdio.h>

int main ()
  {
    int i,tab[6], max, min;
    printf("Podaj 6 liczb większych niz 0: ");
    for(i=0; i<6; i=i+1)
      {
        scanf("%d",&tab[i]);
      }
      max=tab[0];
      min=tab[0];
      for(i=1; i<6; i=i+1)
      {
        if(max<tab[i]) max=tab[i];
        if(min>tab[i]) min=tab[i];
      }
      printf("MAX: %d\n", max);
      printf("MIN: %d\n",min);
  };
