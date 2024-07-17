#include <stdio.h>
int main()
{
	int Y = 10, P = 20, R1; 

	R1 = ++Y + Y++ + --Y + ++P - --P - --P;

	printf("\nThe value of the calculation:%d", R1);							
	printf("\nThe values of Y and P at ending are %d and %d respect.\n", Y, P);

	return 0;
}