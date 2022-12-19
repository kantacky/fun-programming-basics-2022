//
// (C) 2022 Kanta Oikawa
//
// exam - grading2.c
//

#include <stdio.h>

int main(void)
{
  double w[3];
  int score[3];
  int n = 10;
  int n_grade[5] = {0};

  scanf("%lf %lf %lf", &w[0], &w[1], &w[2]);

  if (w[0] + w[1] + w[2] != 1.0)
  {
    printf("Invalid grading ratio.\n");

    return -1;
  }

  while (1)
  {
    n++;

    scanf("%d %d %d", &score[0], &score[1], &score[2]);

    if (score[0] < 0)
      break;

    int total_score = score[0] * w[0] + score[1] * w[1] + score[2] * w[2];

    if (total_score >= 90)
      n_grade[0]++;
    else if (total_score >= 80)
      n_grade[1]++;
    else if (total_score >= 70)
      n_grade[2]++;
    else if (total_score >= 60)
      n_grade[3]++;
    else
      n_grade[4]++;
  }

  printf("S: %d\n", n_grade[0]);
  printf("A: %d\n", n_grade[1]);
  printf("B: %d\n", n_grade[2]);
  printf("C: %d\n", n_grade[3]);
  printf("F: %d\n", n_grade[4]);

  return 0;
}
