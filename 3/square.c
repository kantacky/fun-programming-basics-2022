//
// (C) 2022 Kanta Oikawa
//
// 3 - square.c
//


#include <stdio.h>

int main(void) {
  int a[100];
  int d;
  scanf("%d", &d);

  for (int i = 0; i < d; i++)
    a[i] = (i + 1) * (i + 1);

  printf("Squares: ");

  for (int i = 0; i < d && i < 10; i++)
    printf("%d, ", a[i]);

  printf("...\n");

  return 0;
}