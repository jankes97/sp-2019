#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *in_handle;
  char bufor[BUFSIZ];
  int i=1;
  unsigned int ui, ui2;
  double x, y, z;
  in_handle = fopen(argv[1], "r");
  while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
    z=x;
    ui2=ui;
    sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
    if (i==1) printf("%d takowanie- kilometry: %d zatankowane paliwo: %.2f  cena/litr %.2f\n",i, ui, x, y);
    else printf("%d takowanie- przejechane kilometry: %d zatankowane paliwo: %.2f  cena/litr %.2f zuzycie/100km %.2f cena/100km %.2f \n",i,ui, x, y, z*100/(ui-ui2),(z*100/(ui-ui2))*y);
    i++;
  }
  fclose(in_handle);
  return EXIT_SUCCESS;
}
