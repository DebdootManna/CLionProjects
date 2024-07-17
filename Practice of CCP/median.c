#include <stdio.h>
#include <stdlib.h>
// A function to swap two elements in an array
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// A function to sort an array using bubble sort algorithm
void bubble_sort(int arr[], int n) {
  // Loop through the array from 0 to n-1
  for (int i = 0; i < n - 1; i++) {
    // Loop through the array from 0 to n-i-1
    for (int j = 0; j < n - i - 1; j++) {
      // Compare the adjacent elements and swap them if they are in wrong order
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

// A function to calculate the median of a sorted array
double median(int arr[], int n) {
  // If the array has odd number of elements, return the middle element
  if (n % 2 == 1) {
    return arr[n / 2];
  }
  // If the array has even number of elements, return the average of the middle two elements
  else {
    return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
  }
}

// A function to print an array
void print_array(int arr[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
    if (i < n - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

// The main function
int main() {
  // Declare an array of integers
  int arr[] = {7, 3, 9, 2, 5, 6, 8, 4, 1};
  // Get the size of the array
  int n = sizeof(arr) / sizeof(arr[0]);
  // Print the original array
  printf("The original array is: ");
  print_array(arr, n);
  // Sort the array
  bubble_sort(arr, n);
  // Print the sorted array
  printf("The sorted array is: ");
  print_array(arr, n);
  // Calculate the median of the array
  double med = median(arr, n);
  // Print the median of the array
  printf("The median of the array is: %.2f\n", med);
  // Return 0 to indicate successful execution
  return 0;
}
