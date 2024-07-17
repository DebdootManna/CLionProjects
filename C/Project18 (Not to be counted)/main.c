#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Using for loop
    printf("Triangle using for loop:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            // Printing 0s and 1s alternately
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    // Using while loop
    printf("Triangle using while loop:\n");
    i = 1;
    while(i <= n)
    {
        j = 1;
        while(j <= i)
        {
            // Printing numbers from 1 to n
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    // Using do...while loop
    printf("Triangle using do...while loop:\n");
    i = 1;
    do
    {
        j = 1;
        do
        {
            // Printing alphabets from A to Z
            printf("%c ", 'A' + j - 1);
            j++;
        } while(j <= i);
        printf("\n");
        i++;
    } while(i <= n);

    return 0;
}
