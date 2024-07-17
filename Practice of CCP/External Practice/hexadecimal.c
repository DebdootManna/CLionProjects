#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("\n%d is a decimal number.",a);
    printf("\n%o is a octal number.",a);
    printf("\n%x is a hexadecimal number.",a);

    return 0;
}