//
// (C) 2022 Kanta Oikawa
//
// 4 - fibocheck.c
//


#include <stdio.h>

int checkseries(int n, int *a) {
  int r = 0;

  for (int i = 2; i < n; i++)
    if (a[i] != a[i - 1] + a[i - 2]) {
      r = i;
      break;
    }
  
  return r;
}

int main(void) {
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", a + i);

  int r = checkseries(n, a);

  if (r == 0)
    printf("This series is Fibonacci!\n");
  else
    printf("Not Fibonacci. The first problem number is: %d\n(Correct: %d+%d=%d)\n", a[r], a[r - 1], a[r - 2], a[r - 1] + a[r - 2]);

  return 0;
}
