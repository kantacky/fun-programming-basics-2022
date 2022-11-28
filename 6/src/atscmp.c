//
// (C) 2022 Kanta Oikawa
//
// 6 - atscmp.c
//


#include <stdio.h>
#include <string.h>

void remove_question(char *s1, char *s2) {
  while(*s1) {
    if (*s1 != '?') {
      *s2 = *s1;
      s2++;
    }
    s1++;
  }
}

int main(void) {
  char s11[31] = {'\0'}, s12[31] = {'\0'};
  scanf("%s", s11);
  scanf("%s", s12);

  char s21[31] = {'\0'}, s22[31] = {'\0'};

  remove_question(s11, s21);
  remove_question(s12, s22);
  
  if (strcmp(s21, s22) == 0)
    printf("Same\n");
  else
    printf("Different\n");

  return 0;
}
