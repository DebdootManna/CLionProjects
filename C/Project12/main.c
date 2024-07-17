#include <stdio.h>
#include <math.h>

int main()
{
    // Declare variables for the coordinates of the points
    double x1, y1, x2, y2, x3, y3;

    // Get the input from the user
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    // Calculate the area of the triangle formed by the points
    // using the formula: area = |(x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)) / 2|
    double area = fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2);

    // Check if the area is zero
    if (area == 0)
    {
        // If yes, then the points are collinear
        printf("The points are collinear.\n");
    }
    else
    {
        // If no, then the points are not collinear
        printf("The points are not collinear.\n");
    }
    printf("23CS043_Debdoot");

    return 0;
}
