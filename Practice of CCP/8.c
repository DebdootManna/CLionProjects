#include <stdio.h>
int main()
{
    int n = 5; // number of rows
    int i = 1, j, k; // loop variables
    while (i <= n) // outer loop for each row
    {
        j = 1;
        while (j <= n - i) // inner loop for spaces
        {
            printf(" ");
            j++;
        }
        k = 1;
        while (k <= 2 * i - 1) // inner loop for stars
        {
            printf("*");
            k++;
        }
        printf("\n"); // new line after each row
        i++;
    }
    return 0;
}
