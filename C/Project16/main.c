#include <stdio.h>
#include <math.h>

// Function to check if a number is prime or not
int isPrime(int n) {
    // Corner cases
    if (n <= 1) return 0;
    if (n <= 3) return 1;

    // Check for divisibility by 2 and 3
    if (n % 2 == 0 || n % 3 == 0) return 0;

    // Check for divisibility by other numbers from 5 to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }

    // If none of the above conditions are true, then n is prime
    return 1;
}

// Function to check if a number is Armstrong or not
int isArmstrong(int n) {
    // Initialize sum of digits and number of digits
    int sum = 0, digits = 0;

    // Count the number of digits and store in a temporary variable
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Compute the sum of digits raised to the power of number of digits
    temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    // If the sum is equal to the original number, then n is Armstrong
    return (sum == n);
}

// Function to check if a number is perfect or not
int isPerfect(int n) {
    // Initialize sum of factors
    int sum = 0;

    // Find the factors of n and add them to the sum
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // If the sum is equal to n, then n is perfect
    return (sum == n);
}

// Main function
int main() {
    // Declare variables for choice and number
    int choice, num;

    // Use do...while loop to display the menu at least once
    do {
        // Display the menu options and ask for user input
        printf("Menu:\n");
        printf("1. Prime or not (Use for Loop)\n");
        printf("2. Armstrong number or not (Use while loop)\n");
        printf("3. Perfect number or not (Use do..while loop)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Use switch statement to perform different actions based on choice
        switch (choice) {
            case 1:
                // Ask for a number and check if it is prime or not using isPrime function
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            case 2:
                // Ask for a number and check if it is Armstrong or not using isArmstrong function
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isArmstrong(num)) {
                    printf("%d is an Armstrong number.\n", num);
                } else {
                    printf("%d is not an Armstrong number.\n", num);
                }
                break;
            case 3:
                // Ask for a number and check if it is perfect or not using isPerfect function
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPerfect(num)) {
                    printf("%d is a perfect number.\n", num);
                } else {
                    printf("%d is not a perfect number.\n", num);
                }
                break;
            case 4:
                // Exit the program
                printf("Thank you for using this program. Goodbye!\n");
                break;
            default:
                // Invalid choice
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4); // Repeat until the user chooses to exit

    printf("\n\n23CS043_Debdoot\n");
    return (0); // Return from main
}