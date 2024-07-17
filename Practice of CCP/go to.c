#include <stdio.h>
int main() {
  int x = 0;
  if (x == 0) {
    goto end; // jump to the end label
  }
  printf("This statement is skipped.\n");
  end: // the label
  printf("This is the end of the function.\n");
  return 0;
}
/*
The goto statement is used to transfer the control to a labeled statement in the same function.
It makes the control jump to the statement that has the specified label. The label is an identifier followed by a colon (:). The goto statement is generally considered a bad programming practice as it can make the code difficult to read and maintain.
For example, the following code uses a goto statement to jump to the end of the function when the variable x is zero.
*/