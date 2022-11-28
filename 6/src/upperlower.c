//
// (C) 2022 Kanta Oikawa
//
// 6 - upperlower.c
//


#include <stdio.h>

int main(void) {
  char s[51];
  scanf("%s", s);

  int upper_case = 0, lower_case = 0;

  for (int i = 0; s[i]; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      upper_case++;
    else if (s[i] >= 'a' && s[i] <= 'z')
      lower_case++;
  }

  printf("Upper:%d\n", upper_case);
  printf("Lower:%d\n", lower_case);

  return 0;
}