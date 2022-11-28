//
// (C) 2022 Kanta Oikawa
//
// practice_exam - ch82a.c
//


#include <stdio.h>

int main(void) {
  char s[51];
  scanf("%s", s);

  int i, count = 0;
  for (i = 0; s[i]; i++)
    if (s[0] == s[i])
      count++;

  printf("First character:%d\n", count);

  if (s[0] == s[i - 1])
    printf("First and last characters are same.\n");

  return 0;
}
