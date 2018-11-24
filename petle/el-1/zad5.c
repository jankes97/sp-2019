/*
5. Student G. Apa dostał od kolegi na kartce kod programu zliczającego znaki odstępu, tabulacji i nowego wiersza. Niestety jego młodszy brat pociął kartkę na kawałki zawierające po jednym wierszu kodu, a następnie kawałki te wymieszał. Uporządkuj te kawałki, tak aby powstał działający program.

zlicz znaki odstępu, tabulacji
{
}
#include &lt;stdio.h>
i nowego wiersza
else if (c == '\t') int main() int c;
nt = 0;
nl = 0;
while ((c = getchar()) != EOF)
    ++nl;
if (c == ' ')
    ++nb;
nb = 0;
return 0;
++nt;
int nb, nt, nl;
printf("%d %d %d\n", nb, nt, nl);
else if (c == '\n')

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~* /

/* zlicz znaki odstępu, tabulacji
{
}
#include &lt;stdio.h>
i nowego wiersza */
#include <stdio.h>


int main(void)
{
    int c;
    int nb, nt, nl;
    nb = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ') // -> "spacja"
            ++nb;
        else if (c == '\t') // \t -> znak tabulacji "tab"
            ++nt;
        else if (c == '\n') // \n -> znak nowej linii "enter" 
            ++nl;
    printf("spacja: %d  tab: %d  enter: %d\n", nb, nt, nl);
    return 0;
}
