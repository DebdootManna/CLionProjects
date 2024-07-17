#include <stdio.h>
#include <math.h>

int main()
{
    // Variable declaration.
    int n, temp, Sr, i;

retry: // Label.

    // Managing I/O for varable "Sr".
    printf("\n**************Menu**************\n[1] Check weather the number is a Prime number or not.\n[2] Check weather the number is Armstrong number ot not.\n[3] Check weather the number is a Perfect number or not.\n[4] Exit.\nEnter the option:");
    scanf("%d", &Sr);

    // Creating switch for "Sr".
    switch (Sr)
    {
    case 1: // When option [1] is selected in menu
        printf("**************Prime or Composite number**************\n");

        // Managing I/O for variable "n".
        printf("Enter the number:");
        scanf("%d", &n);

        // Initailizating flag.
        int f = 0;

        if (n == 1) // When the number entered is '1'.
        {
            printf("One is not defined neither prime nor a composite number.");
            goto retry;
        }

        for (i = 2; i < n; i++) // giving 2 as an value for i and setting condition i<n also updating the value of i in a for loop.
        {
            temp = n % i;  // Calculates module of the with the entered number.
            if (temp == 0) // when temp is zero means n is factor of a number other than itself or '1'.
            {
                f = 1; // Changing value of flag for output.
                break;
            }
        }

        if (f == 1) // if the value of flag is changed to '1' this follwing block of commands would execute.
        {
            printf("The number is a composite number.");
        }
        else
        {
            printf("The number is a prime number.");
        }

        goto retry; // Sending control to label named "retry".
    case 2:
        printf("**************Armstrong number**************\n");

        // Managing I/O for variable "n".
        printf("Enter the number:");
        scanf("%d", &n);

        int s = 0, c = 0; // Intailizting two variables "s" for calculating sum and "c" for counting the number of digits as zero.
        int r;            // Creating variable "r" to store the remainder

        temp = n; // storing value of "n" in "temp".

        while (temp != 0) // Checking weather the entered number is zero or not.
        {
            c = c + 1;        // increasing the value of counter.
            temp = temp / 10; // This will move the number from tens place to units place until the value of temp becomes zero.
        }

        temp = n; // Again storing in "temp".

        while (temp > 0) // Checking weather the number is positive number or not.
        {
            r = temp % 10;     // here "r" will store the value of the remainder from the operation which would be the last
            s = s + pow(r, c); // adding the "r" rasied to "c" to "s".
            temp = temp / 10;  // To change the units palce.
        }

        if (n == s) // Checking weather the "s" is same as "n".
        {
            printf("The number is an Amstrong number.");
        }
        else
        {
            printf("The number is an non-Amstrong number.");
        }

        goto retry; // Sending control to label named "retry".
    case 3:
        printf("**************Perfect number**************\n");

        // Managing I/O for variable "n".
        printf("Enter the number:");
        scanf("%d", &n);

        int sum = 0; // Intailzating "sum" variable as zero.

        do
        {
            if (n % i == 0) // allowing only the number which are factors for "n".
            {
                sum = sum + i; // Adding "i" to "sum".
            }
            i++;
        } while (i < n);

        if (sum = n) // Checking weather the "sum" is same as "n".
        {
            printf("The number is a Perfect number.");
        }
        else
        {
            printf("The number is a non-Perfect number.");
        }

        goto retry; // Sending control to label named "retry".
    case 4:
        break; // exiting
    default:
        printf("Choose a vaild operation!!");

        goto retry; // Sending control to label named "retry".
    }

    return 0;
}