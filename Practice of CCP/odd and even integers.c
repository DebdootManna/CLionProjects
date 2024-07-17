#include <stdio.h>

void main () {
    int arr1 [10], arr2 [10], arr3 [10];
    int i,j=0,k=0,n;

    printf ("\n\nSeparate odd and even integers in separate arrays:\n");
    printf ("------------------------------------------------------\n");

    printf ("Input the number of elements to be stored in the array :");
    scanf ("%d",&n);

    printf ("Input %d elements in the array :\n",n);
    for (i=0;i<n;i++) {
        printf ("element - %d : ",i);
        scanf ("%d",&arr1 [i]);
    }

    for (i=0;i<n;i++) {
        if (arr1 [i]%2 == 0) {
            arr2 [j] = arr1 [i];
            j++;
        }
        else {
            arr3 [k] = arr1 [i];
            k++;
        }
    }

    printf ("\nThe Even elements are : \n");
    for (i=0;i<j;i++) {
        printf ("%d ",arr2 [i]);
    }

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