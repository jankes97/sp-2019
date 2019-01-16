/* 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca. */

#include <stdio.h>

void wieksza(void);

int main()
{
    wieksza();
}

void wieksza()
{
    int i, tab[6];
    printf("Podaj 6 liczb większe niz 0: ");
    for (i = 0; i < 6; i = i + 1)
    {
        scanf("%d", &tab[i]);
    }
    for (i = 0; i < 6; i = i + 1)
    {
        if(i<5)
        {
            printf("%d ", tab[i]);
        }
        if (i == 5)
        {
            printf("%d\n", tab[i]);
        }
        
    }
}
