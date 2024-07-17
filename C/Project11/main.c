#include <stdio.h>

int main() {
    int quantity;
    float price, total_expenses;

    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);

    printf("Enter the price per item: ");
    scanf("%f", &price);

    total_expenses = quantity * price;

    if (quantity > 1000) {
        total_expenses *= 0.9;
    }

    printf("The total expenses are %.2f\n", total_expenses);

    printf("23CS043_Debdoot");

    return 0;
}
