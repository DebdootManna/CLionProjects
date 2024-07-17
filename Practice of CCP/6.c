#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    int s=21;

    while (s>1)
    {
        printf("There are %d sticks left. How many do you want?: ");
        scanf("%d",&a);

        if (a<1 || a>4)
        {
            printf("Invalid input. Minimum 1 and maximum 4\n");
            continue;
        }

        if (a>s)
        {
            printf("What are you doing!? Minimum 1 and Maximum 4\n");
            continue;
        }

        printf("You've picked %d of sticks.\n",a);
        s=s-a;

        if (s==1)
        {
            printf("You picked the last stick.\n ");
            break;
        }
        b=5-a;
        printf("The computer picked %d sticks.\n",b);

        s=s-b;
        if (s==1)
        {
            printf("The computer lost. You won!\n");
            break;
        }
    }
    return 0;
}