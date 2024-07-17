#include <stdio.h>

int main() {
    int num1, num2;

    // Collect input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap using a third variable
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping with a third variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swap without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping without a third variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    printf("23CS043_Debdoot");

    return 0;
}
