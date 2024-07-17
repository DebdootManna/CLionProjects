#include <stdio.h>

int main() {
    double num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The largest number is %.2lf.", largest);
    return 0;
}
