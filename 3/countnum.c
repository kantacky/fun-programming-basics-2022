//
// (C) 2022 Kanta Oikawa
//
// 3 - countnum.c
//


#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int n_even = 0;
  int n_3 = 0;
  int n_4 = 0;

  int k;

  for (int i = 0; i < n; i++) {
    scanf("%d", &k);

    if (k % 2 == 0)
      n_even++;
    if (k % 3 == 0)
      n_3++;
    if (k % 4 == 0)
      n_4++;
  }

  printf("Even numbers: %d\n", n_even);
  printf("3-multiples : %d\n", n_3);
  printf("4-multiples : %d\n", n_4);

  return 0;
}
