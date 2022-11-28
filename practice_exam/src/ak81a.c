//
// (C) 2022 Kanta Oikawa
//
// practice_exam - ak81a.c
//


#include <stdio.h>

int main(void) {
  int class_num, eval_score, times = 0;
  double average;

  for (int i = 0; i < 10; i++) {
    scanf("%d %d", &class_num, &eval_score);
    if (class_num == 7) {
      times++;
      average += eval_score;
    }
  }

  if (times != 0) {
    average /= times;
    printf("Class 7 was evaluated %d times, average score: %.2f\nNumber of other response: %d\n", times, average, 10 - times);
  } else
    printf("No students answered about class 7.\nNumber of other response: 10\n");

  return 0;
}
