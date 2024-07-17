#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("\nThe ending values of a and b are %d and %d resp.\n", a, b);
    return 0;
}