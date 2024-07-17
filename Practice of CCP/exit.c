#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("The number is divisible by 5\n");
        exit(0); // or exit(EXIT_SUCCESS);
    }
    else
    {
        printf("The number is not divisible by 5\n");
        exit(1); // or exit(EXIT_FAILURE);
    }
    return 0;
}
/*
The exit() function is used to end the program execution and return the status code to the caller.
The status code can be used to indicate whether the program ran successfully or encountered an error. 

The exit() function takes a single parameter status which is the exit code that is returned to the caller i.e. either the operating system or parent process.
There are two valid values we can use as the status each having a different meaning.
They are as follows:
0 or EXIT_SUCCESS: 0 or EXIT_SUCCESS means that the program has been successfully executed without encountering any error.
1 or EXIT_FAILURE: 1 or EXIT_FAILURE means that the program has encountered an error and could not be executed successfully.
We can actually return any non-zero return value in case of failure1.
*/