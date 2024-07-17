#include <stdio.h>

// Recursive function
void DtoB(int n) {
    if (n > 0) {
        DtoB(n / 2); // Recursive call for the quotient
        printf("%d", n % 2);   // Print the remainder (binary digit)
    }
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 0) {
        printf("Binary equivalent: 0\n");
    } else {
        printf("Binary equivalent: ");
        DtoB(n);
        printf("\n");
    }
    printf("\n\n23CS043_Debdoot\n");
    return 0;
}
