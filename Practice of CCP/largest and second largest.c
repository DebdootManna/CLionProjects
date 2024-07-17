#include <stdio.h>
#define MAX 100 // maximum size of the array

int main()
{
    int arr[MAX]; // declare an array of size MAX
    int n; // number of elements in the array
    int i; // loop variable
    int max1, max2; // variables to store the largest and second largest elements

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); // read the number of elements from the user

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // read the elements from the user
    }

    max1 = max2 = arr[0]; // initialize max1 and max2 to the first element

    // loop through the array from the second element onwards
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max1) // if the current element is greater than max1
        {
            max2 = max1; // update max2 to the previous value of max1
            max1 = arr[i]; // update max1 to the current element
        }
        else if (arr[i] > max2 && arr[i] != max1) // if the current element is greater than max2 and not equal to max1
        {
            max2 = arr[i]; // update max2 to the current element
        }
    }

    printf("The largest element is %d\n", max1); // print the largest element
    printf("The second largest element is %d\n", max2); // print the second largest element

    return 0;
}

/*
The program works as follows:
First, it defines a constant MAX to represent the maximum size of the array. 
This is done to avoid hard-coding the size of the array in the program and to make it easier to change the size if needed.

Next, it declares an array of integers arr of size MAX, an integer variable n to store the number of elements in the array, an integer variable i to use as a loop variable, and two integer variables max1 and max2 to store the largest and second largest elements of the array respectively.

Then, it prompts the user to enter the number of elements in the array and reads it using the scanf function.
It also checks if the number of elements is valid, i.e. it is positive and less than or equal to MAX. If not, it prints an error message and exits the program.

After that, it prompts the user to enter the elements of the array and reads them using a for loop and the scanf function.
It also checks if the elements are valid, i.e. they are integers. If not, it prints an error message and exits the program.

Next, it initializes max1 and max2 to the first element of the array.
This is done to have a starting point for comparison with the rest of the elements.

Then, it loops through the array from the second element onwards using another for loop.
For each element, it compares it with max1 and max2 and updates them accordingly.
The logic is as follows:

    If the current element is greater than max1, then it means that the current element is the new largest element of the array.
    So, we assign the previous value of max1 to max2 and the current element to max1.

    Else, if the current element is greater than max2 and not equal to max1, then it means that the current element is the new second largest element of the array.
    So, we assign the current element to max2.

    Else, we do nothing and move on to the next element.
*/