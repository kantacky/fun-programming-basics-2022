//
// (C) 2022 Kanta Oikawa
//
// 3 - sumavg.c
//


#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  double k, sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%lf", &k);
    sum += k;
  }

  double ave = sum / n;

  printf("The sum     of the %d numbers is: %.4f\n", n, sum);
  printf("The average of the %d numbers is: %.4f\n", n, ave);

  return 0;
}
