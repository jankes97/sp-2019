/*
Pierwsza linia (#ip 0) wskazuje, że wskaźnik instrukcji powinien być powiązany z rejestracją 0 w tym programie. Nie jest to instrukcja, więc wartość wskaźnika instrukcji nie zmienia się podczas przetwarzania tej linii.
    Wskaźnik instrukcji zawiera 0, dlatego wykonywana jest pierwsza instrukcja (seti 5 0 1). Aktualizuje rejestr 0 do bieżącej wartości wskaźnika instrukcji (0), ustawia rejestr 1 na 5, ustawia wskaźnik instrukcji na wartość rejestru 0 (co nie ma skutku, ponieważ instrukcja nie modyfikowała rejestru 0), a następnie dodaje jeden do wskaźnika instrukcji.
    Wskaźnik instrukcji zawiera 1, więc wykonywana jest druga instrukcja, seti 6 0 2. Jest to bardzo podobne do instrukcji przed nim: 6 jest przechowywane w rejestrze 2, a wskaźnik instrukcji pozostaje z wartością 2.
    Wskaźnik instrukcji wynosi 2, co wskazuje na instrukcję addi 0 1 0. Jest to podobne do skoku względnego: wartość wskaźnika instrukcji 2 jest ładowana do rejestru 0. Następnie addi znajduje wynik dodania wartości do rejestru 0 i wartość 1, przechowująca wynik, 3, z powrotem w rejestrze 0. Register 0 jest następnie kopiowany z powrotem do wskaźnika instrukcji, co spowoduje, że skończy 1 większy niż powinien i pominąć następną instrukcję (addr 1 2 3) całkowicie. Na końcu 1 jest dodawany do wskaźnika instrukcji.
    Wskaźnik instrukcji wynosi 4, więc uruchamiana jest instrukcja setr 1 0 0. Jest to jak skok bezwzględny: kopiuje wartość zawartą w rejestrze 1, 5, do rejestru 0, co powoduje, że kończy się w wskaźniku instrukcji. Wskaźnik instrukcji jest następnie inkrementowany, pozostawiając go na poziomie 6.
    Wskaźnik instrukcji wynosi 6, więc instrukcja seti 9 0 5 przechowuje 9 w rejestrze 5. Wskaźnik instrukcji jest inkrementowany, co powoduje, że wskazuje on program, a więc program się kończy.

Jaka wartość pozostaje w rejestrze 0, gdy proces w tle zatrzymuje się?


#ip 3
addi 3 16 3   r3=r3+16
seti 1 6 5	  r1=1 (pierwsza zostaje, druga usun) 
seti 1 8 2	      
mulr 5 2 1	  r1=r5*r2
eqrr 1 4 1	  r1=r1==r4
addr 1 3 3    r3=r1+r3
addi 3 1 3
addr 5 0 0
addi 2 1 2
gtrr 2 4 1	  r1=r2>r4
addr 3 1 3
seti 2 3 3
addi 5 1 5
gtrr 5 4 1
addr 1 3 3
seti 1 8 3
mulr 3 3 3
addi 4 2 4
mulr 4 4 4
mulr 3 4 4
muli 4 11 4  r4=r4*11
addi 1 6 1
mulr 1 3 1
addi 1 10 1
addr 4 1 4
addr 3 0 3
seti 0 0 3
setr 3 9 1    r1=r3
mulr 1 3 1
addr 3 1 1
mulr 3 1 1
muli 1 14 1
mulr 1 3 1
addr 4 1 4
seti 0 4 0
seti 0 0 3
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void part1();
void part2();

int main(void)
{
  part1(); 
  part2(); 
}

void part1(void)
{
  int r0, r1, r2, r3, r4, r5;
  r0 = 0;
  r1 = 0;
  r2 = 0;
  r3 = 0;
  r4 = 0; 
  r5 = 0;

  while(r3 <= 35)
  {
    switch(r3)
    {
      case 0: r3 = r3 + 16; break; 
      case 1: r5 = 1; break; 
      case 2: r2 = 1; break;
      case 3: r1 = r5 * r2; break; 
      case 4: r1 = r1 == r4; break; 
      case 5: r3 = r1 + r3; break;
      case 6: r3 = r3 + 1; break;
      case 7: r0 = r5 + r0; break;
      case 8: r2 = r2 + 1; break;
      case 9: r1 = r2 > r4; break;
      case 10: r3 = r3 + r1; break;
      case 11: r3 = 2; break;
      case 12: r5 = r5 + 1; break;
      case 13: r1 = r5 > r4; break;
      case 14: r3 = r1 + r3; break;
      case 15: r3 = 1; break;
      case 16: r3 = r3 * r3; break;
      case 17: r4 = r4 + 2; break;
      case 18: r4 = r4 * r4; break;
      case 19: r4 = r3 * r4; break;
      case 20: r4 = r4 * 11; break;
      case 21: r1 = r1 + 6; break;
      case 22: r1 = r1 * r3; break;
      case 23: r1 = r1 + 10; break;
      case 24: r4 = r4 + r1; break;
      case 25: r3 = r3 + r0; break;
      case 26: r3 = 0; break;
      case 27: r1 = r3; break;
      case 28: r1 = r1 * r3; break;
      case 29: r1 = r3 + r1; break;
      case 30: r1 = r3 * r1; break;
      case 31: r1 = r1 * 14; break;
      case 32: r1 = r1 * r3; break;
      case 33: r4 = r4 + r1; break;
      case 34: r0 = 0; break;
      case 35: r3 = 0; break;
    }
    r3 += 1;
  }
  printf("%d\n",r0);
}

void part2(void)
{
  int r0, ip, r4, r5;

  r0 = 0;
  ip = 1;
  r4 = 19 * 4 * 11 + (6 * 22) + 10 + 32 * 14 * 30 * (29 + (27 * 28));
  r5 = 1;

  do
  {
    if (r4 % r5 == 0)
    {
      r0 = r5 + r0;
    }
    r5 = r5 + 1;
  } 
  while (r5 <= r4);

  printf("%d\n", r0);
}