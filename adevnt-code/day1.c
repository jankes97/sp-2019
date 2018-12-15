#include <stdio.h>
#include <math.h>

void frequency();
void sortowanie();

int main(void)
{
    int x, answer, a;
   // int tab[995] = {};

    frequency(a, answer, x);
    
    //sortowanie(tab[995]);

}

void frequency()
{
    int x, i, a, answer;
    //int liczba;
    int tab[995] = { };
    //int e, w;

    for (x = 1; x <= 996; x++)
    {
        scanf("%d", &a);

        answer = answer + a;

        tab[i] = answer;
        i++;
    }
    printf("Odpowiedź to: %d\n", answer);


    //sortowanie(tab[995]);


    int t;
    for (int j = 0; j < 996; j++)
    {
        for (i = 0; i < 995; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                t = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = t;
            }
           
        }
    }
    for (int h = 0; h <= 995; h++)
    {
        printf("%d\n", tab[h]);
        if (tab[i] == tab[i + 1])
        {
           //printf("!!! TUTAJ: TAB[%d] == %d !!!!!\n", i, tab[i]);
        }
    }
}
/*
void sortowanie(int tab[995])
{
    int t;
    int i, j;
    //int tab2;

    for (int h = 0; h <= 995; h++)
    {
        printf("tab[%d] = %d\n", h, tab[h]);
    }

    for (j = 0; j < 996; j++)
    {
        for (i = 0; i < 995; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                t = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = t;
            }
            if (tab[i] == tab[i+1])
            {
                printf("!!! TUTAJ: TAB[%d] == %d !!!!!\n", i, tab[i]);
            }
        }
    }
  
}*/

   
