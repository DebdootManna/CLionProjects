#include <stdio.h>
int main() {
  int i = 1, j, rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  while (i <= rows) {
    j = 1;
    while (j <= i) {
      printf("%d ", j);
      j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}
/*
while (condition) {
  while (condition) {
    // statement(s) of inner loop
  }
  // statement(s) of outer loop
}
*/