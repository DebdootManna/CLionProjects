#include <stdio.h>
#define SIZE 5 // Define the size of the array

int main()
{
    int arr1[SIZE], arr2[SIZE]; // Declare two arrays of same size
    int i; // Declare a loop variable

    printf("Enter %d elements in the first array: \n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr1[i]); // Read the elements of the first array from the user
    }

    // Copy the elements of the first array into the second array
    for (i = 0; i < SIZE; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("The elements of the second array are: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr2[i]); // Print the elements of the second array
    }
    printf("\n");

    return 0;
}
