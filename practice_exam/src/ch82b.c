//
// (C) 2022 Kanta Oikawa
//
// practice_exam - ch82b.c
//


#include <stdio.h>

int main(void) {
  FILE *fp;
  char path[101];
  char pattern[51];
  char line[101];

  scanf("%s %s", path, pattern);

  fp = fopen(path, "r");
  if (!fp)
    return 1;
  
  int matched;

  while (fgets(line, 101, fp)) {
    for (int i = 0; line[i]; i++) {
      matched = -1;

      for (int j = 0; pattern[j]; j++)
        if (line[i] == pattern[j])
          matched = 1;

      if (matched > 0)
        printf("*");
      else
        printf("%c", line[i]);
    }
  }

  printf("\n");

  fclose(fp);

  return 0;
}
