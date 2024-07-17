#include <stdio.h>

void main () {
    // Declare three arrays of size 10 to store the input, even and odd elements
    int arr1 [10], arr2 [10], arr3 [10];
    // Declare three variables to store the loop counters and the number of elements
    int i,j=0,k=0,n;

    // Print a message to the user
    printf ("\n\nSeparate odd and even integers in separate arrays:\n");
    printf ("------------------------------------------------------\n");

    // Ask the user to input the number of elements and store it in n
    printf ("Input the number of elements to be stored in the array :");
    scanf ("%d",&n);

    // Ask the user to input n elements and store them in arr1
    printf ("Input %d elements in the array :\n",n);
    for (i=0;i<n;i++) {
        printf ("element - %d : ",i);
        scanf ("%d",&arr1 [i]);
    }

    // Loop through each element in arr1
    for (i=0;i<n;i++) {
        // Check if the element is even by using modulo operator
        if (arr1 [i]%2 == 0) {
            // If yes, store it in arr2 and increment j
            arr2 [j] = arr1 [i];
            j++;
        }
        else {
            // If no, store it in arr3 and increment k
            arr3 [k] = arr1 [i];
            k++;
        }
    }

    // Print the even elements in arr2
    printf ("\nThe Even elements are : \n");
    for (i=0;i<j;i++) {
        printf ("%d ",arr2 [i]);
    }

    // Print the odd elements in arr3
    printf ("\nThe Odd elements are :\n");
    for (i=0;i<k;i++) {
        printf ("%d ", arr3 [i]);
    }
    printf ("\n\n");
}

/*
This program prompts the user to input the number of elements they want to store in the array and stores it in the variable n using scanf.
The second printf statement asks the user to input n number of elements into the array arr1 using a for loop, and stores each input in the corresponding index of the array arr1[i].
The next for loop then iterates over each element in arr1, and separates the even and odd elements into two different arrays arr2 and arr3, respectively, using if-else statements.
The variables j and k are used to keep track of the indices of the even and odd elements in the two arrays.
Finally, the last two printf statements print out the even and odd elements found, respectively, using a for loop to iterate over each element in the two arrays.
*/