//
// (C) 2022 Kanta Oikawa
//
// 5 - calc.c
//


#include <stdio.h>
#include <string.h>

int main(void) {
  char s[100], t[100];
  scanf("%s", s);

  int i, j = 0, n = 0;

  for (i = 0; s[i]; i++) {
    if (s[i] == '+' || s[i] == '=') {
      n += atoi(t);
      for (int k = 0; k < j; k++)
        t[k] = '\0';
      j = 0;
    } else {
      t[j] = s[i];
      j++;
    }
  }

  printf("%d\n", n);

  return 0;
}