#include <stdio.h>

void convertToRupees(int paisa) {
    float rupees = paisa / 100.0;
    printf("%d paisa is equal to %.2f rupees.\n", paisa, rupees);
}

void convertToPaisa(int rupees) {
    int paisa = rupees * 100;
    printf("%d rupees is equal to %d paisa.\n", rupees, paisa);
}

int main() {
    int amount, choice;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Choose an option:\n");
    printf("1. Convert paisa to rupees\n");
    printf("2. Convert rupees to paisa\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            convertToRupees(amount);
            break;
        case 2:
            convertToPaisa(amount);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
