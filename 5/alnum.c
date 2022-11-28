//
// (C) 2022 Kanta Oikawa
//
// 5 - alnum.c
//


#include <stdio.h>

int main(void) {
  char s[100];
  scanf("%s", s);

  for (int i = 0; s[i]; i++) {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
      printf("%c", s[i]);
  }

  printf("\n");

  for (int i = 0; s[i]; i++) {
    if (s[i] >= '0' && s[i] <= '9')
      printf("%c", s[i]);
  }

  printf("\n");

  return 0;
}
