#include <stdio.h>
int main() {
  int i;
  for (i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      continue; // skip the even numbers
    }
    printf("%d\n", i);
  }
  return 0;
}
/*
The continue statement is used to skip the current iteration of a loop and continue with the next iteration.
It makes the control jump to the end of the loop body and evaluate the loop condition again.
For example, the following code uses a continue statement to skip the even numbers and print only the odd numbers from 1 to 10.
*/