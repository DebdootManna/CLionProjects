#include <stdio.h>
int main() {
  int i = 1, j, rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  do {
    j = 1;
    do {
      printf("* ");
      j++;
    } while (j <= i);
    printf("\n");
    i++;
  } while (i <= rows);
  return 0;
}

/*
do {
  // statement(s) of the loop
} while (condition);
*/