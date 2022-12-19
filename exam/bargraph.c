//
// (C) 2022 Kanta Oikawa
//
// exam - bargraph.c
//

#include <stdio.h>

int main(void)
{
  char s[101];
  int n[10] = {0};

  scanf("%s", s);

  for (int i = 0; s[i]; i++)
  {
    if (s[i] >= '0' && s[i] <= '9')
      n[s[i] - '0']++;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d:", i);

    for (int j = 0; j < n[i]; j++)
      printf("*");

    printf("\n");
  }

  return 0;
}
