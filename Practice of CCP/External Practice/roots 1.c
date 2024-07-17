#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float d;

    float r1;
    float r2;
    float i;

    printf("ax^2+bx+c=0");
    printf("Enter the value of a: ");
    scanf("%f",&a);

    printf("Enter the value of b: ");
    scanf("%f",&b);

    printf("Enter the value of c: ");
    scanf("%f",&c);

    d = b * b - (4 * a * c);

    switch (d > 0)
    {
    case 1:
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the quadratic equation are %.2f and %.2f.", r1, r2);
        break;
    
    case 0:
        switch (d < 0)
        {
            case 1: 
            printf("The roots are imaginary.\n");
            i = sqrt(-d) / (2 * a);
            r1 = r2 = -b / (2 * a);
            printf("The roots of the quadratic equation are %.2f+i%.2f and %.2f-i%.2f.", r1, i, r2, i);
            break;
        case 0:
            printf("The roots are real and equal.\n");
            r1 = r2 = -b / (2 * a);
            printf("The roots of the quadratic equation are %.2f and %.2f.", r1, r2);
            break;
        }
    }
    return 0;
}