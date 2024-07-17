#include <stdio.h>
int main()
{
    int n = 5; // number of rows
    int i = 1, j, k; // loop variables
    do // outer loop for each row
    {
        j = 1;
        do // inner loop for spaces
        {
            printf(" ");
            j++;
        } while (j <= n - i);
        k = 1;
        do // inner loop for stars
        {
            printf("*");
            k++;
        } while (k <= i);
        printf("\n"); // new line after each row
        i++;
    } while (i <= n);
    return 0;
}
