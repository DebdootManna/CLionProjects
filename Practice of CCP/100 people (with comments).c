#include <stdio.h>
#define N 100 // number of persons

int main()
{
    int age[N]; // array to store the ages
    int count = 0; // variable to count the number of persons in the age group of 60 to 70
    int i; // loop variable

    // read the ages from the user
    printf("Enter the ages of %d persons:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &age[i]);
    }

    // loop through the ages and check if they are in the age group of 60 to 70
    for (i = 0; i < N; i++)
    {
        // if the age is not in the range, skip the iteration using continue statement
        if (age[i] < 60 || age[i] > 70)
        {
            continue;
        }
        // otherwise, increment the count
        count++;
    }

    // print the result
    printf("The number of persons in the age group of 60 to 70 is %d\n", count);

    return 0;
}
