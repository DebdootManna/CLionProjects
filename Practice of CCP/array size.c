#include <stdio.h>
#define SIZE 5 // define the size of the arrays

int main()
{
    int a[SIZE], b[SIZE], c[SIZE], d[SIZE]; // declare four arrays of same size
    int i; // declare a loop variable

    printf("Enter %d elements for the first array:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]); // input values for the first array
    }

    printf("Enter %d elements for the second array:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &b[i]); // input values for the second array
    }

    printf("Enter %d elements for the third array:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &c[i]); // input values for the third array
    }

    for (i = 0; i < SIZE; i++)
    {
        d[i] = a[i] + b[i] + c[i]; // do addition of three arrays and save it in the fourth array
    }

    printf("The addition of the three arrays is:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", d[i]); // print the addition of the arrays
    }
    printf("\n");

    return 0;
}
