//
// (C) 2022 Kanta Oikawa
//
// 2 - ctof.c
//


#include <stdio.h>

int main(void) {
  int c, f;
  double f_double;

  scanf("%d", &c);

  f_double = (9.0 / 5) * c + 32;
  f = (int)(f_double);

  printf("%d Degrees Celsius is %d Degrees Fahrenheit. \n", c, f);

  return 0;
}