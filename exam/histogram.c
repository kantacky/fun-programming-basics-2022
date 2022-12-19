//
// (C) 2022 Kanta Oikawa
//
// exam - histogram.c
//

#include <stdio.h>

int main(void)
{
  FILE *fp;
  char s[101];
  char line[101];
  int n[10] = {0};

  scanf("%s", s);

  fp = fopen(s, "r");
  if (!fp)
    return 1;

  while (fgets(line, 101, fp))
    for (int i = 0; line[i]; i++)
      if (line[i] >= '0' && line[i] <= '9')
        n[line[i] - '0']++;

  int n_max = 0;
  for (int i = 0; i < 10; i++)
    if (n[i] > n_max)
      n_max = n[i];

  for (int i = n_max; i > 0; i--)
  {
    for (int j = 0; j < 10; j++)
    {
      if (n[j] - i >= 0)
        printf("*");
      else
        printf(" ");
    }

    printf("\n");
  }

  printf("----------\n");
  printf("0123456789\n");

  fclose(fp);

  return 0;
}
