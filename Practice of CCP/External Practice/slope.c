#include <stdio.h>
#include <math.h>

int main()
{
    int x1;
    int x2;
    int x3;

    int y1;
    int y2;
    int y3;

    int s1;
    int s2;
    int s3;

    printf("Enter the x coordinate of first point: ");
    scanf("%d",&x1);
    printf("Enter the y coordinate of first point: ");
    scanf("%d",&y1);

    printf("Enter the x coordinate of second point: ");
    scanf("%d",&x2);
    printf("Enter the y coordinate of second point: ");
    scanf("%d",&y2);

    printf("Enter the x coordinate of third point: ");
    scanf("%d",&x3);
    printf("Enter the y coordinate of third point: ");
    scanf("%d",&y3);

    s1 = (y2-y1)/(x2-x1);
    s2 = (y3-y2)/(x3-x2);
    s3 = (y3-y1)/(x3-x1);

    //if ((s1 == s1) && (s1 == s3))
    if (s1 == s2 ==s3)
    {
        printf("The points are collinear.");
    }
    else
    {
        printf("The points are not collinear.");
    }

    return 0;
}