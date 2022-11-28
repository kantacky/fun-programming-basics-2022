//
// (C) 2022 Kanta Oikawa
//
// 2 - lse.c
//


#include <stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);

  if (a - b >= 20 || a - b <= -20)
    printf("large difference\n");
  else
    printf("small difference\n");

  return 0;
}
