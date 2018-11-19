/* 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca. */

#include <stdio.h>
int main()
{
    int i, tab[6];
    printf("Podaj liczbe większą niz 0: ");
    for (i = 0; i < 6; i = i + 1)
    {
        scanf("%d", &tab[i]);
    }
    for (i = 0; i < 6; i = i + 1)
    {
        printf("%d ", tab[i]);
    }
};
