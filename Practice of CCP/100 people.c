#include <stdio.h>
#define N 100

int main()
{
    int age[N];
    int count = 0;
    int i;

    printf("Enter the ages of %d persons:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &age[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (age[i] < 60 || age[i] > 70)
        {
            continue;
        }
        count++;
    }

    printf("The number of persons in the age group of 60 to 70 is %d\n", count);

    return 0;
}
