# include <stdio.h>

int main ()
{
    int i=1, j, no_Rows;
    printf("The number of rows you need to print the pattern: ");
    scanf("%d", &no_Rows);

    do
    {
        j=0;
        do
        {
            printf(" ");
            j++;
        } while (j<=no_Rows-i);
        j=1;
        do
        {
            printf("%c", j+64);
            j++;
        } while (j<=i);
        j=i-1;
        do
        {
            if (j==0)
            {
                j--;
                continue;
            }
            printf("%c", j+64);
            j--;
        } while (j>=1);
        printf("\n");
        i++;
    } while (i<=no_Rows);
    
    return 0;
}