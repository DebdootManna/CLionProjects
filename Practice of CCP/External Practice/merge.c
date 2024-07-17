#include <stdio.h>

int main()
{
    int a1[] = {1,3,5,7,9};
    int a2[] = {2,4,6,8,10};

    int a1_size = sizeof(a1) / sizeof(a1[0]);
    int a2_size = sizeof(a2) / sizeof(a2[0]);

    int a3_size = a1_size + a2_size;

    int a3[a3_size];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a1_size && j < a2_size)
    {
        if (a1[i] < a2[j])
        {
            a3[k++] = a1[i++];
        } else {
            a3[k++] = a2[j++];
        }
    }

    while (i < a1_size)
    {
        a3[k++] = a1[i++];
    }
    
    while (j < a2_size)
    {
        a3[k++] = a2[j++];
    }
    
    printf("Merged Array: ");
    for (i = 0; i < a3_size; i++)
    {
        printf("%d ", a3[i]);
    }
    
    return 0;
}