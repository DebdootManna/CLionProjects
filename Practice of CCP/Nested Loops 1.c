#include <stdio.h>
int main() {
  int i, j, rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 1; i <= rows; ++i) {
    for (j = 1; j <= i; ++j) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
/*
for (initialization; condition; increment) {
  for (initialization; condition; increment) {
    // statement(s) of inner loop
  }
  // statement(s) of outer loop
}
*/