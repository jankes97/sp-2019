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
int part1(przypisz *przypiszy, int len, int width, int height);
int part2(przypisz *przypiszy, int len);
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
  przypisz *przypiszy = malloc(sizeof(przypisz)); // Przyznanie pamieci w bajtach
  int przypiszLen = 0;
  int width = 0;
  int height = 0;

  dane = fopen(INPUT, "r");
  if (dane == NULL)
  {
    perror(INPUT);
    exit(EXIT_FAILURE);
  }

  while (getline(&line, &len, dane) != -1)
  {
    line[strcspn(line, "\r\n")] = 0;

    //pobiera liczbę w postaci ciągu znaków ASCII, a następnie zwraca jej wartość w formacie int.
    przypisz przypisz = {atoi(line + 1),
                   atoi(line + idz_do(line, '@') + 1),
                   atoi(line + idz_do(line, ',') + 1),
                   atoi(line + idz_do(line, ':') + 2),
                   atoi(line + idz_do(line, 'x') + 1)};

    przypiszLen++;
    przypiszy = realloc(przypiszy, sizeof(przypisz) * przypiszLen); //zmienia rozmiar przydzielonego wcześniej bloku pamięci wskazywanego
    przypiszy[przypiszLen - 1] = przypisz;
    if (przypisz.x + przypisz.width > width)
    {
      width = przypisz.x + przypisz.width;
    }
    if (przypisz.y + przypisz.height > height)
    {
      height = przypisz.y + przypisz.height;
    }
  }

  printf("part 1: %d\n", part1(przypiszy, przypiszLen, width, height));
  printf("part 2: %d\n", part2(przypiszy, przypiszLen));
  free(przypiszy); //zwalnia blok pamięci
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

int part1(przypisz *przypiszy, int len, int width, int height)
{
  int paper[width][height]; //tablica wielowymiarowa
  int overlapping = 0;
  memset(paper, 0, sizeof(paper)); //Wypełnia kolejne bajty w pamięci ustaloną wartością

  //Wypełnianie tablicy
  for (int i = 0; i < len; i++) 
  {
    for (int j = przypiszy[i].x; j < przypiszy[i].x + przypiszy[i].width; j++)
    {
      for (int k = przypiszy[i].y; k < przypiszy[i].y + przypiszy[i].height; k++)
      {
        paper[j][k]++;
      }
    }
  }

  //przeszukanie tablicy
  for (int i = 0; i < width; i++) 
  {
    for (int j = 0; j < height; j++)
    {
      if (paper[i][j] > 1)
      {
        overlapping++;
      }
    }
  }
  return overlapping;
}

int part2(przypisz *przypiszy, int len) 
{
  int id = -1;
  for (int i = 0; i < len; i++)
  {
    id = przypiszy[i].id;
    for (int j = 0; j < len; j++)
    {
      if (i != j && ile_razy(przypiszy[i], przypiszy[j]))
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
