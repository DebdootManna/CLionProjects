#include <stdio.h>

int main()
{
    int s=21;
    int uc;
    int cc;

    while (1) 
    {
        printf("\n %d sticks are left on the board.", s);
        printf("\nHow many do you pick? (1-4): ");
        scanf("%d",&uc);

        if (uc < 1 || uc > 4)
        {
            printf("Invalid choice motherfucker. Pick again\n");
            continue;
        }

        s -= uc;
        printf("You've picked %d sticks.", uc);

        

        cc = 5 - uc;
        printf("\nThe computer picked %d sticks.", cc);
        s -= cc;

        if (s == 1)
        {
            printf("\nYou've picked up the last stick. You lose motherfucker!");
            break;
        }
        // if (s == 1)
        // {
        //     printf("\nThe computer picked last. You've won, motherfucker.");
        //     break;
        // }
    }
    return 0;
}