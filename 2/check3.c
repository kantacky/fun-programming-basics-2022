//
// (C) 2022 Kanta Oikawa
//
// 2 - check3.c
//


#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);

  if (n % 3 == 0 || n - (n / 10 * 10) == 3 || n / 10 == 3)
    printf("satisfy\n");
  else
    printf("not satisfy\n");

  return 0;
}
