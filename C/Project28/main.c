#include <stdio.h>
#include <math.h>

float semi_perimeter(float, float, float);
float area_triangle(float, float, float);

void main()
{
    float a, b, c;

    printf("Enter first side:");
    scanf("%f", &a);

    printf("Enter second side:");
    scanf("%f", &b);

    printf("Enter third side:");
    scanf("%f", &c);

    float area = area_triangle(a, b, c);

    if (area > 0)
    {
        printf("The area of triangle is: %.2f", area);
    }
    else
    {
        printf("The entered sides don't form a triangle.");
    }

    printf("\n\n23CS043_Debdoot\n");
}

float semi_perimeter(float a, float b, float c)
{
    return (a + b + c) / 2.0;
}

float area_triangle(float a, float b, float c)
{
    return sqrt(semi_perimeter(a, b, c) * (semi_perimeter(a, b, c) - a) * (semi_perimeter(a, b, c) - b) * (semi_perimeter(a, b, c) - c));
}