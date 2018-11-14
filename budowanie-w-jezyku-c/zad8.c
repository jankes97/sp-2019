/*8. Napisz program, który prosi użytkownika o wprowadzenie trzech liczb z klawiatury, a następnie wypisze sumę, iloczyn, najmniejszą i największą z wprowadzonych liczb.

Dialog na terminalu powinien wyglądać tak:

Wprowadź trzy liczby całkowite: 1 2 3
Suma wynosi: 6
Iloczyn wynosi: 6
Najmniejsza liczba to: 1
Największa liczba to: 3 */

#include <math.h>
#include <stdio.h>

void Suma(int x, int y, int z)
{
    int sum;
    sum = x + y + z;
    printf("Suma wynosi: %d \n", sum);
}

void Iloczyn(int x, int y, int z)
{
    int iloczyn;
    iloczyn = x * y * z;
    printf("Iloczyn wynosi: %d\n", iloczyn);
}

void Najmniejsza(int x, int y, int z)
{
    int min;
    min = x;
    if (min > y) min = y;
    if (min > z) min = z;
    printf("Najmniejsza liczba to: %d\n", min);
}

void Najwieksza(int x, int y, int z)
{
    int max;
    max = x;
    if (max < y) max = y;
    if (max < z) max = z;
    printf("Największa liczba to: %d\n", max);
}

int main(void)
{
    int x, y, z;
    printf("Wprowadź trzy liczby całkowite: ");
    scanf( "%d %d %d", &x, &y, &z );
    Suma(x,y,z);
    Iloczyn(x,y,z);
    Najmniejsza(x,y,z);
    Najwieksza(x,y,z);
}
