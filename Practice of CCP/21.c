#include <stdio.h>

void No_arg_No_return(void);
int No_arg_return(void);
void Arg_No_return(int);
int Arg_return(int);

void main()
{
    int f1, f2, num;

    No_arg_No_return();

    f1 = No_arg_return();
    printf("The factorial of the given number using the function without a argument, but a return value is: %d\n", f1);

    printf("Enter the number:");
    scanf("%d", &num);
    Arg_No_return(num);
    
    printf("Enter the number:");
    scanf("%d", &num);
    f2 = Arg_return(num);
    printf("The factorial of the given number with an argument and a return value is: %d\n", f2);

    printf("\n\n23CS043_Debdoot\n");
}

void No_arg_No_return()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    int fac = 1;

    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }

    printf("The factorial of the given number using the function with no arguments and return value is: %d\n", fac);
}

int No_arg_return()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    int fac = 1;

    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }

    return fac;
}

void Arg_No_return(int a)
{
    int fac = 1;

    for (int i = 1; i <= a; i++)
    {
        fac *= i;
    }

    printf("The factorial of the given number using the functon with an argument, but no return value is: %d\n", fac);
}

int Arg_return(int b)
{
    int fac = 1;

    for (int i = 1; i <= b; i++)
    {
        fac *= i;
    }

    return fac;
}