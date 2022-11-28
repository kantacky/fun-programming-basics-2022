//
// (C) 2022 Kanta Oikawa
//
// 6 - ptraverse.c
//


#include <stdio.h>

int main(void) {
  char s[51] = {'\0'};
  scanf("%s", s);

  char *pt = s;

  while(*pt) {
    printf("%c;\n", *pt);

    if (*pt >= '1' && *pt <= '9')
      pt += (*pt - '0');
    else
      pt++;
  }

  return 0;
}
