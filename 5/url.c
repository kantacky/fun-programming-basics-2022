//
// (C) 2022 Kanta Oikawa
//
// 5 - url.c
//


#include <stdio.h>

int main(void) {
  char s[100];
  char t[100] = {};

  scanf("%s", s);
  
  int i, j = 0, k = 0;

  for (i = 0; s[i]; i++) {
    if (s[i] == '/') {
      if (k == 2)
        printf("domain: %s\n", t);

      for (int l = 0; l < j; l++)
        t[l] = '\0';

      j = 0;
      k++;
    } else {
      t[j] = s[i];
      j++;
    }
  }

  printf("file: %s\n", t);

  return 0;
}
