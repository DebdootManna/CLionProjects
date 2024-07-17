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

// Driver code
int main()
{
    // Create two arrays of different size
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create an array to store the merged result
    int arr3[n1 + n2];

    // Merge the two arrays
    merge(arr1, n1, arr2, n2, arr3);

    // Print the merged array
    printf("Merged array: \n");
    printArray(arr3, n1 + n2);

    return 0;
}
