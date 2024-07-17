//This code is by Debdoot 23CS043
#include <stdio.h>

void binary(int);

void main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("The binary of %d is ", num);
    binary(num);

    printf("\n23CS043_Debdoot\n");
}

void binary(int a)
{
    if (a > 0)
    {
        binary(a / 2);         
        printf("%d", a % 2);
    }
}