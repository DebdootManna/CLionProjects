#include <stdio.h>
#include <math.h>
#define Pi 3.14 

int main()
{
    float t; // time
    float l; // length
    float g; //gravity

    printf("Enter the length of the pendulum: ");
    scanf("%f",&l);
    printf("Enter the value of gravity: ");
    scanf("%f",&g);

    t = (2 * Pi)/(l/g); 

    printf("The time period of the fucking pendulum is %.2f ", t);
    return 0;
}