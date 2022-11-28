//
// (C) 2022 Kanta Oikawa
//
// practice_exam - ak81b.c
//


#include <stdio.h>

int main(void) {
  int class_num, eval_score, times[10][5] = {0};
  double average[10] = {0};

  while (1) {
    scanf("%d", &class_num);
    if (class_num == 0)
      break;
    scanf("%d", &eval_score);
    times[class_num - 1][eval_score]++;
    average[class_num - 1] += eval_score;
  }

  scanf("%d", &class_num);

  printf("Class %d graph:\n", class_num);

  int total = 0;
  for (int i = 0; i < 5; i++) {
    printf("%d  %d\n", i, times[class_num - 1][i]);
    total += times[class_num - 1][i];
  }

  if (total != 0) {
    average[class_num - 1] /= total;
    printf("Average score: %.2f\n", average[class_num - 1]);
  } else
    printf("Average score cannot be computed.\n");
  
  printf("Thank you for using this program.\n");

  return 0;
}
