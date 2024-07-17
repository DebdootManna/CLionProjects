#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    double length, gravity;

    printf("Enter the length of the pendulum: ");
    scanf("%lf", &length);

    printf("Enter the acceleration due to gravity (m/s^2): ");
    scanf("%lf", &gravity);

    double timePeriod = 2 * PI * sqrt(length / gravity);

    printf("The time period of the pendulum is: %.2lf seconds\n", timePeriod);

    printf("23CS043_Debdoot");

    return 0;
}
