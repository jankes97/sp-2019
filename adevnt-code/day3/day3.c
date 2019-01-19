/*
Each Elf has made a claim about which area of fabric would be ideal for Santa's suit. All claims have an ID and consist of a single rectangle with edges parallel to the edges of the fabric. Each claim's rectangle is defined as follows:

    The number of inches between the left edge of the fabric and the left edge of the rectangle.
    The number of inches between the top edge of the fabric and the top edge of the rectangle.
    The width of the rectangle in inches.
    The height of the rectangle in inches.

A claim like #123 @ 3,2: 5x4 means that claim ID 123 specifies a rectangle 3 inches from the left edge, 2 inches from the top edge, 5 inches wide, and 4 inches tall. Visually, it claims the square inches of fabric represented by # (and ignores the square inches of fabric represented by .) in the diagram below:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INPUT "day3-1.txt"

//slowa kluczowe, definiowanie typow i struktor
typedef struct przypisz
{
  int id;
  int x;
  int y;
  int width;
  int height;
} przypisz;

void plik(void);

int idz_do(char *string, char c);
int part1(przypisz *przypisy, int len, int width, int height);
int part2(przypisz *przypisy, int len);
int ile_razy(przypisz c1, przypisz c2);

int main()
{
  plik();
}

void plik(void) //Pobieranie danych z pliku
{
  FILE *dane;
  char *line = NULL;
  size_t len = 0;
  przypisz *przypisy = malloc(sizeof(przypisz)); // Przyznanie pamieci w bajtach
  int przypiszLen = 0;
  int width = 0;
  int height = 0;

  dane = fopen(INPUT, "r");
  if (dane == NULL)
  {
    perror(INPUT); //Wypisuje zrozumiały komunikat o błędzie i przechodzi do następnej linii
    exit(EXIT_FAILURE);
  }

  while (getline(&line, &len, dane) != -1)
  {
    line[strcspn(line, "\r\n")] = 0; // zlicza od początku ilość znaków w łańcuchu s które nie należą do niepasujace i zatrzymuje się na pierwszym pasującym którego nie liczy. Ilość zliczonych znaków jest zwracana.

    //pobiera liczbę w postaci ciągu znaków ASCII, a następnie zwraca jej wartość w formacie int.
    przypisz przypisz = {atoi(line + 1),
                         atoi(line + idz_do(line, '@') + 1),
                         atoi(line + idz_do(line, ',') + 1),
                         atoi(line + idz_do(line, ':') + 2),
                         atoi(line + idz_do(line, 'x') + 1)};

    przypiszLen++;
    przypisy = realloc(przypisy, sizeof(przypisz) * przypiszLen); //zmienia rozmiar przydzielonego wcześniej bloku pamięci wskazywanego
    przypisy[przypiszLen - 1] = przypisz;
    if (przypisz.x + przypisz.width > width)
    {
      width = przypisz.x + przypisz.width;
    }
    if (przypisz.y + przypisz.height > height)
    {
      height = przypisz.y + przypisz.height;
    }
  }

  printf("part 1: %d\n", part1(przypisy, przypiszLen, width, height));
  printf("part 2: %d\n", part2(przypisy, przypiszLen));
  free(przypisy); //zwalnia blok pamięci
  fclose(dane);
  free(line);
  exit(EXIT_SUCCESS);
}

int idz_do(char *string, char c)
{
  int pos = -1;
  int len = strlen(string);
  for (int i = 0; i < len; i++)
  {
    if (string[i] == c)
    {
      pos = i;
      break;
    }
  }
  return pos;
}

int part1(przypisz *przypisy, int len, int width, int height)
{
  int tab[width][height]; //tablica wielowymiarowa
  int okrazenia = 0;
  memset(tab, 0, sizeof(tab)); //Wypełnia kolejne bajty w pamięci ustaloną wartością

  //Wypełnianie tablicy
  for (int i = 0; i < len; i++)
  {
    for (int j = przypisy[i].x; j < przypisy[i].x + przypisy[i].width; j++)
    {
      for (int k = przypisy[i].y; k < przypisy[i].y + przypisy[i].height; k++)
      {
        tab[j][k]++;
      }
    }
  }

  //przeszukanie tablicy
  for (int i = 0; i < width; i++)
  {
    for (int j = 0; j < height; j++)
    {
      if (tab[i][j] > 1)
      {
        okrazenia++;
      }
    }
  }
  
  return okrazenia;
}

int part2(przypisz *przypisy, int len)
{
  int id = -1;
  for (int i = 0; i < len; i++)
  {
    id = przypisy[i].id;
    for (int j = 0; j < len; j++)
    {
      if (i != j && ile_razy(przypisy[i], przypisy[j]))
      {
        id = -1;
      }
    }
    if (id != -1)
    {
      break;
    }
  }
  return id;
}

int ile_razy(przypisz c1, przypisz c2)
{
  int left1 = c1.x, right1 = c1.x + c1.width, top1 = c1.y, bot1 = c1.y + c1.height;
  int left2 = c2.x, right2 = c2.x + c2.width, top2 = c2.y, bot2 = c2.y + c2.height;
  if (left1 >= right2 || left2 >= right1)
  {
    return 0;
  }
  else if (top1 >= bot2 || top2 >= bot1)
  {
    return 0;
  }
  return 1;
}
