#include <stdio.h>

int main()
{
    char c[100000];

    printf("Enter the reason why do you hate Jesus: ");
    gets(c);
    printf("The Reason:-\n");
    puts(c);

    return 0;
}