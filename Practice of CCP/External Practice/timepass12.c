#include <stdio.h>

int main()
{
    int a;
    printf("Enter age: ");
    scanf("%d", &a);

    a >= 18 ? printf("adult\n") : printf("not adult\n");

    return 0;
}