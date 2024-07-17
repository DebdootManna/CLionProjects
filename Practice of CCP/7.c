#include <stdio.h>
int main()
{
    int n; // number of rows
    int i, j; // loop variables
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) // outer loop for each row
    {
        for (j = 1; j <= i; j++) // inner loop for stars
        {
            printf("%d",j%2);
        }
        printf("\n"); // new line after each row
    }
    return 0;
}
