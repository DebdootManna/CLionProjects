#include <stdio.h>

int main()
{
    // Declare an array of 8 floats
    float arr[8];
    // Declare a variable to store the sum
    float sum = 0;
    // Loop through the array and input the numbers
    for (int i = 0; i < 8; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
        // Add the number to the sum
        sum += arr[i];
    }
    // Print the sum
    printf("The sum of the numbers is: %.2f\n", sum);
    return 0;
}
