//
// (C) 2022 Kanta Oikawa
//
// exam - grading.c
//

#include <stdio.h>

int main(void)
{
  double sum = 0;
  int score[3];
  int n = 10;

  for (int i = 0; i < n; i++)
  {
    scanf("%d %d %d", &score[0], &score[1], &score[2]);
    sum += score[0] * 0.4 + score[1] * 0.3 + score[2] * 0.3;
  }

  printf("Average score = %.2f\n", sum / n);

  return 0;
}
