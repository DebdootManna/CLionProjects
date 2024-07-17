#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10) // the condition is always true
    {
        printf("%d\n", i);
        // i is not incremented
    }
    return 0;
}
