#include <stdio.h>

int main()
{
    // Creating variables.
    int n[25], no_positive = 0, no_negative = 0, no_even = 0, no_odd = 0, no_zero = 0, Limit;

    // Scanning total number of numbers.
    printf("Enter the number of entries: ");
    scanf("%d", &Limit);

    // Scanning the numbers.
    printf("Enter the numbers:\n");
    for (int i = 0; i < Limit; i++)
    {
        scanf("%d", &n[i]);
    }

    // Calculating for positive, negative, zero, odd or even.
    for (int i = 0; i < Limit; i++)
    {
        if (n[i] > 0)
        {
            no_positive++;
        }
        if (n[i] == 0)
        {
            no_zero++;
        }
        if (n[i] < 0)
        {
            no_negative++;
        }
        if (n[i] % 2 == 0)
        {
            no_even++;
        }
        else
        {
            no_odd++;
        }
    }
    
    // Printing the total number of positive, negative, zero, even and odd.
    printf("The number of positive numbers: %d\n", no_positive);
    printf("The number of zeros: %d\n", no_zero);
    printf("The number of negative numbers: %d\n", no_negative);
    printf("The number of even numbers: %d\n", no_even);
    printf("The number of odd numbers: %d\n", no_odd);

    return 0;
}