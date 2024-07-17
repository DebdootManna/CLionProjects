#include <stdio.h>

int main()
{
    int i = 1;
    int j;
    int n;

    printf("Enter number of rows:");
    scanf("%d", &n);

    do
    {
        j = 0;
        do
        {
            printf(" ");
            j++;
        } while (j <= n - i);
        j = 1;
        do
        {
            printf("%c", j + 64);
            j++;
        } while (j <= i);
        j = i - 1;
        do
        {
            if (j == 0)
            {
                j--;
                continue;
            }
            printf("%c", j + 64);
            j--;
        } while (j >= 1);
        printf("\n");
        i++;
        
        
    } while (i <= n);
    return 0;
}