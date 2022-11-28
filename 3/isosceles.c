//
// (C) 2022 Kanta Oikawa
//
// 3 - isosceles.c
//


#include <stdio.h>

int main(void) {
  int d;
  scanf("%d", &d);

  for (int i = 0; i < d; i++) {
    for (int j = 0; j < d - i - 1; j++)
      printf(" ");

    for (int j = 0; j < (i + 1) * 2 - 1; j++)
      printf("*");
    
    printf("\n");
  }

  return 0;
}