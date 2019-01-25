# Struktury

Punkt:

```
struct point {
  int x;
  int y;
};
```

Prostokąt:

```
struct rect {
  struct point ll;  /* lower left */
  struct point ur;  /* upper right */
};
```

Funkcja, makepoint, z podanych współrzędnych tworzy strukturę point:

```
struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

```

Funkcja ptinrect sprawdza, czy punkt leży wewnątrz prostokąta:

```
/* ptinrect: zwróć 1 jeśli p należy do r, 0 jeśli nie należy */
int ptinrect(struct point p, struct rect r) {
  return p.x >= r.ll.x && p.x < r.ur.x
      && p.y >= r.ll.y && p.y < r.ur.y;
}
```

Powyżej przyjmujemy konwencję, że prostokąt zawiera swoje krawędzie lewą i dolną, a nie zawiera pozostałych.

Do każdej z funkcji przedstawionych poniżej napisać program sprawdzający poprawność implementacji.


## 1. Napisać funkcję rectinrect sprawdzającą, czy prostokąt jest zawarty wewnątrz prostokąta:

```
/* rectinrect: zwróć 1 jeśli r1 jest zawarty w r2, 0
   — w przeciwnym przypadku */
int rectinrect(struct rect r1, struct rect r);
```

## 2. Napisać funkcję disjointrect sprawdzającą, czy prostokąty są rozłączne:

```
/* disjointrect: zwróć 1 jeśli r1 jest rozłączny z r2,
   0 — w przeciwnym przypadku */
int disjointrect(struct rect r1, struct rect r2);
```
