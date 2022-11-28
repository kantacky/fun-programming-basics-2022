//
// (C) 2022 Kanta Oikawa
//
// 4 - fibogen.c
//


#include <stdio.h>

int fibocompute(int p, int q, int n) {
  int t;

  for (int i = 1; i < n; i++) {
    t = p;
    p = q;
    q += t;
  }

  return p;
}

int main(void) {
  int p, q, n;

  scanf("%d %d %d", &p, &q, &n);

  printf("The answer is: %d\n", fibocompute(p, q, n));

  return 0;
}