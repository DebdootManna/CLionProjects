#include <stdio.h>
int main() {
  int i = 1;
  while (i <= 10) {
    printf("%d\n", i);
    if (i == 5) {
      break; // exit the loop
    }
    i++;
  }
  printf("The loop is terminated.\n");
  return 0;
}
/*
The break statement is used to terminate the execution of a loop or switch statement.
It makes the control jump out of the loop or switch block and resume the execution of the next statement after the block.
For example, the following code uses a break statement to exit the while loop when the variable i becomes equal to 5.
*/