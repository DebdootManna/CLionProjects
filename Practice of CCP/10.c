#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    i = 1;
    do
    {
        k = 0;
        do
        {
            printf(" ");
            k++;
        } while (k <= n - i);
        j = 1;
        do
        {
            printf("%c ",j+64);
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    } while (i <= n);
    return 0;
}
