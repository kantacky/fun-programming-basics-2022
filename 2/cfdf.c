//
// (C) 2022 Kanta Oikawa
//
// 2 - cfdf.c
//


#include <stdio.h>

int main(void) {
  int c1, c2, c;
  double f1, f2, f;

  scanf("%d %d", &c1, &c2);

  c = c1 - c2;

  f1 = (9.0 / 5) * c1 + 32;
  f2 = (9.0 / 5) * c2 + 32;

  f = f1 - f2;

  printf("Diff: %d [C] (%.2f [F])\n", c, f);

  return 0;
}