#include <stdio.h>
#include <stdlib.h>

// A function to merge two sorted arrays into one
void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and compare elements
    while (i < n1 && j < n2)
    {
        // Copy the smaller element to the merged array
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Copy the remaining elements of arr1, if any
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Copy the remaining elements of arr2, if any
    while (j < n2)
        arr3[k++] = arr2[j++];
}

// A function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// A function to sort an array using bubble sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap the adjacent elements if they are in wrong order
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// The main function
int main()
{
    // Create two arrays of different size
    int arr1[] = {10, 5, 15, 12, 90, 80};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {7, 3, 9, 6, 18, 20, 100};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Sort the arrays using bubble sort
    bubbleSort(arr1, n1);
    bubbleSort(arr2, n2);

    // Print the sorted arrays
    printf("First sorted array: \n");
    printArray(arr1, n1);
    printf("Second sorted array: \n");
    printArray(arr2, n2);

    // Create an array to store the merged result
    int arr3[n1 + n2];
    merge(arr1, n1, arr2, n2, arr3);

    // Print the merged array
    printf("Merged and sorted array: \n");
    printArray(arr3, n1 + n2);

    return 0;
}
