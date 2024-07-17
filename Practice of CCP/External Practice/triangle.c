#include <stdio.h>
#include <math.h>

int semi_perimeter(int, int, int);
int area_triangle(int, int, int);

void main()
{
    int a;
    int b;
    int c;

    printf("Enter first side:");
    scanf("%d", &a);

    printf("Enter second side:");
    scanf("%d", &b);

    printf("Enter third side:");
    scanf("%d", &c);

    float area = area_triangle(a, b, c);

    if (area > 0)
    {
        printf("The area of triangle is: %d", area);
    }
    else
    {
        printf("The entered sides don't form a triangle.");
    }

}

int semi_perimeter(int a, int b, int c)
{
    return (a + b + c) / 2;
}

int area_triangle(int a, int b, int c)
{
    return sqrt(semi_perimeter(a, b, c) * (semi_perimeter(a, b, c) - a) * (semi_perimeter(a, b, c) - b) * (semi_perimeter(a, b, c) - c));
}
