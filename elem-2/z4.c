/*#include <stdio.h>
int main() {
   /** deklaracje zmiennych lokalnych */
// nb = 0;  /* liczba znaków odstępu */
// nt = 0;  /* liczba znaków tabulacji */
// nl = 0;  /* liczba znaków nowego wiersza */
//while ((c=getchar()) != EOF) {
/** zliczaj białe znaki */
//}
//printf("liczba znaków odstępu = %d, \
      tabulacji = %d, nowego wiersza = %d\n", ... );
//return 0;
//}*/

#include <stdio.h>

int main()
{
   double c;
   int nb = 0; /* liczba znaków odstępu */
   int nt = 0; /* liczba znaków tabulacji */
   int n1 = 0; /* liczba znaków nowego wiersza */

   while ((c=getchar()) != EOF)
   {
      if (c == ' ')
      {
         ++nb;
      }
      if (c == '\t')
      {
         ++nt;
      }

      if (c == '\n')
      {
         ++n1;
      }
   }
   printf("\n liczba znaków odstępu (spacja) = %d, tabulacji (tab) = %d, nowego wiersza (enter) = %d\n", nb, nt, n1);
   return 0;
}
