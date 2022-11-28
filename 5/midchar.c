//
// (C) 2022 Kanta Oikawa
//
// 5 - midchar.c
//


#include <stdio.h>

int main(void) {
  char s[100];
  scanf("%s", s);

  int i = 0;
  while (s[i])
    i++;
    
  char t[4] = {s[0], s[i / 2], s[i - 1], '\0'};
  printf("%d: %s\n", i, t);

  return 0;
}