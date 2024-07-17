#include <stdio.h>

int main()
{
    float amt;
    float qty;
    float pce;

    printf("Enter the price of product: ");
    scanf("%f",&pce);
    printf("Enter the quantity of the product: ");
    scanf("%f",&qty);

    amt = pce * qty;

    if (qty>1000)
    {
        amt = amt * 0.9;
    }

    printf("The bill is %.3f", amt);
}