//
// (C) 2022 Kanta Oikawa
//
// 4 - npaint.c
//


#include <stdio.h>

int cost(int n) {
  if (n >= 1 && n <= 2)
    return 1000 * n;
  else if (n >= 3 && n <= 4)
    return 800 * n;
  else if (n >= 5 && n <= 9)
    return 600 * n;
  else if (n >= 10 && n <= 29)
    return 400 * n;
  else if (n >= 30)
    return 200 * n;
  else
    return 0;
}

int main(void) {
  int n1, n2;

  scanf("%d %d", &n1, &n2);

  for (int i = n1; i <= n2; i++)
    printf("%d: %d Yen.\n", i, cost(i));

  return 0;
}
