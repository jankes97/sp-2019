/*9. Napisać program, który wypisze tabelkę wartości pierwiastka kwadratowego. Program ma pytać o

        wartość poczatkową
        wartość końcową
        krok dla argumentu

    i wypisywać tabelkę w podanym zakresie. Liczby powinny być wypisywane z dokładnością czterech miejsc po przecinku. Na przykład, jeżeli podamy 1 jako wartość poczatkową, 2 jako końcową i 0.5 jako krok, powinismy dostać:

    1.0000  1.0000
    1.5000  1.2247
    2.0000  1.4142
*/

#include <math.h>
#include <stdio.h>

void tabela(double p, double k, double a)
{
    double i, pierwiastek;
    for (i = p; i <= k; i = i + a)
    {
        pierwiastek = sqrt(i);
        printf("%.4f %.4f\n", i, pierwiastek);
    }
}

int main(void)
{
    double p, k, a;
    printf("Podaj wartość poczatkową: ");
    scanf("%lf", &p);
    printf("Podaj wartość końcową: ");
    scanf("%lf", &k);
    printf("Podaj krok dla argumentu: ");
    scanf("%lf", &a);
    tabela(p, k, a);
}
