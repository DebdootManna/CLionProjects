#include <stdio.h>
int main()
{
	int Y = 10;
    int Rajiv;
    int Preet;
    int Raj;
    int Ritul;

	printf("The value of Y at the starting:%d", Y);

	Rajiv = ++Y;
	Preet = --Y;
	Raj = Y++;
	Ritul = Y--;

	printf("\nThe value of Y at the ending:%d", Y);																	  
	printf("\nThe values after each changes:\nRajiv\t%d\nPreet\t%d\nRaj\t%d\nRitul\t%d\n", Rajiv, Preet, Raj, Ritul);

	return 0;
}