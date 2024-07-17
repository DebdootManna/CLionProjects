#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *numbers;
   int n, sum = 0;
   float average;

   // Input the size of the array
   printf("Enter the size of the array: ");
   scanf("%d", &n);

   // Dynamically allocate memory for the array
   numbers = (int *)malloc(n * sizeof(int));

   // Check if memory allocation is successful
   if (numbers == NULL)
   {
       printf("Memory allocation failed.\n");
       return 1; // Exit with an error code
   }

   // Input N numbers into the array
   printf("Enter %d numbers:\n", n);
   for (int i = 0; i < n; i++)
   {
       scanf("%d", &numbers[i]);
       sum += numbers[i];
   }

   // Calculate the average
   average = (float)sum / n;

   // Display the entered numbers and the average
   printf("\nEntered numbers: ");
   for (int i = 0; i < n; i++)
   {
       printf("%d ", numbers[i]);
   }
   printf("\nAverage: %.2f\n", average);

   // Free the dynamically allocated memory
   free(numbers);

   printf("\n\n23CS043_Debdoot\n");
   return 0;
}
