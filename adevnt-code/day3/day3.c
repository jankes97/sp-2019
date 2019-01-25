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

typedef struct Claim
{
  int id;
  int x;
  int y;
  int width;
  int height;
} Claim;

void load_data(void);
int advanceTo(char *string, char c);
void perform_claim(Claim *claims, int len, int width, int height);
void count_overlaps(int overlapping, int width, int height, int paper[width][height]);
void overlap_id(Claim *claims, int len);
int overlaps(Claim c1, Claim c2);

int main()
{
  load_data();
}

void load_data(void)
{
  FILE *fp;

  char *line = NULL;
  size_t len = 0;
  Claim *claims = malloc(sizeof(Claim));
  int claimLen = 0;
  int width = 0;
  int height = 0;

  fp = fopen(INPUT, "r");
  while (getline(&line, &len, fp) != -1)
  {
    line[strcspn(line, "\r\n")] = 0;
    Claim claim = {atoi(line + 1), atoi(line + advanceTo(line, '@') + 1), atoi(line + advanceTo(line, ',') + 1), atoi(line + advanceTo(line, ':') + 2), atoi(line + advanceTo(line, 'x') + 1)};
    claimLen++;
    claims = realloc(claims, sizeof(Claim) * claimLen);
    claims[claimLen - 1] = claim;
    if (claim.x + claim.width > width)
    {
      width = claim.x + claim.width;
    }
    if (claim.y + claim.height > height)
    {
      height = claim.y + claim.height;
    }
  }
  perform_claim(claims, claimLen, width, height);
  overlap_id(claims, claimLen);
}

int advanceTo(char *string, char c)
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

void perform_claim(Claim *claims, int len, int width, int height)
{
  int paper[width][height];
  memset(paper, 0, sizeof(paper));
  for (int i = 0; i < len; i++)
  {
    for (int j = claims[i].x; j < claims[i].x + claims[i].width; j++)
    {
      for (int k = claims[i].y; k < claims[i].y + claims[i].height; k++)
      {
        paper[j][k]++;
      }
    }
  }
  int overlapping = 0;
  count_overlaps(overlapping, width, height, paper);
}

void count_overlaps(int overlapping, int width, int height, int paper[width][height])
{
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
  printf("Part 1: %d\n", overlapping);
}

void overlap_id(Claim *claims, int len)
{
  int id = -1;
  for (int i = 0; i < len; i++)
  {
    id = claims[i].id;
    for (int j = 0; j < len; j++)
    {
      if (i != j && overlaps(claims[i], claims[j]))
      {
        id = -1;
      }
    }
    if (id != -1)
    {
      break;
    }
  }
  printf("Part 2: %d\n", id);
}

int overlaps(Claim c1, Claim c2)
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
