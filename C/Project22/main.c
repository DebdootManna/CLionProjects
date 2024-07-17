#include <stdio.h>
#define SIZE 25 // Define the size of the array

int main()
{
    int arr[SIZE]; // Declare an array of integers
    int i, pos = 0, neg = 0, even = 0, odd = 0; // Declare variables to store the counts

    printf("Enter 25 numbers:\n"); // Prompt the user to enter the numbers
    for (i = 0; i < SIZE; i++) // Loop through the array
    {
        scanf("%d", &arr[i]); // Read a number from the keyboard and store it in the array
        if (arr[i] > 0) // If the number is positive
        {
            pos++; // Increment the positive count
        }
        else if (arr[i] < 0) // If the number is negative
        {
            neg++; // Increment the negative count
        }
        if (arr[i] % 2 == 0) // If the number is even
        {
            even++; // Increment the even count
        }
        else // If the number is odd
        {
            odd++; // Increment the odd count
        }
    }

    printf("Positive numbers: %d\n", pos); // Print the positive count
    printf("Negative numbers: %d\n", neg); // Print the negative count
    printf("Even numbers: %d\n", even); // Print the even count
    printf("Odd numbers: %d\n", odd); // Print the odd count

    printf("\n\n23CS043_Debdoot\n");
    return 0;
}
