#include <stdio.h>

int main()
{
    int a[25];
    int i;
    int p=0;
    int n=0;
    int e=0;
    int o=0;

    printf("Enter 25 integer numbers:-\n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] > 0)
        {
            p++;
        }
        else if (a[i] < 0)
        {
            n++;
        }
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }

    printf("\nPositive numbers: %d\n", p);
    printf("\nNegative numbers: %d\n", n);
    printf("\nOdd numbers: %d\n", o);
    printf("\nEven numbers: %d\n", e);

    return 0;
    
}