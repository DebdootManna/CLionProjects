// Include the math library for sqrt function
#include <math.h>
// Include the stdio library for input and output functions
#include <stdio.h>

int main()
{
    // Declare variables for coefficients, discriminant and roots
    double a, b, c, d, root1, root2, imaginary;
    // Declare a variable for the switch case
    int choice;

    // Prompt the user to enter the coefficients
    printf("Enter coefficients a, b and c: ");
    // Scan the user input and store them in variables
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    // Check if the discriminant is positive, negative or zero
    if (d > 0)
        choice = 1; // Positive discriminant
    else if (d < 0)
        choice = 2; // Negative discriminant
    else
        choice = 3; // Zero discriminant

    // Use a switch case to find the roots based on the choice
    switch (choice)
    {
        case 1: // Positive discriminant
            // Calculate the roots using the formula
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            // Print the roots with two decimal points
            printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2);
            break;
        case 2: // Negative discriminant
            // Calculate the real part and imaginary part of the roots
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-d) / (2 * a);
            // Print the roots with two decimal points and i for imaginary part
            printf("Root1 = %.2lf + i%.2lf and Root2 = %.2lf - i%.2lf\n", root1, imaginary, root2, imaginary);
            break;
        case 3: // Zero discriminant
            // Calculate the roots using the formula
            root1 = root2 = -b / (2 * a);
            // Print the roots with two decimal points
            printf("Root1 = Root2 = %.2lf\n", root1);
            break;
        default: // Invalid choice
            printf("Invalid choice\n");
            break;
    }

    printf("23CS043_Debdoot");

    return 0;
}
