//
// (C) 2022 Kanta Oikawa
//
// 4 - pyramid.c
//


#include <stdio.h>

void print_mark(int n) {
  for (int i = 0; i < n; i++)
    printf("*");
}

int main(void) {
  int n;
  scanf("%d", &n);

  if (n > 0) {
    printf("|\n");
    for (int i = 0; i < n; i++) {
      print_mark(i + 1);
      printf("\n");
    }
  } else if (n < 0) {
    for (int i = 0; i < -1 * n; i++) {
      print_mark(-1 * n - i);
      printf("\n");
    }
    printf("|\n");
  }
  else
    printf("No pyramid.\n");

  return 0;
}