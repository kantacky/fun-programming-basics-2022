//
// (C) 2022 Kanta Oikawa
//
// 6 - amap.c
//


#include <stdio.h>

void batch_transform(int *a, int x, int y) {
  for (int i = 0; i < 5; i++) {
    a[i] *= x;
    a[i] += 2 * y;
  }
}

int main(void) {
  int a[5];
  for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);

  int x, y;
  for (int i = 0; i < 3; i++) {
    scanf("%d %d", &x, &y);
    batch_transform(a, x, y);
  }

  for (int i = 0; i < 5; i++) {
    if (i == 4)
      printf("%d\n", a[i]);
    else
      printf("%d ", a[i]);
  }

  return 0;
}