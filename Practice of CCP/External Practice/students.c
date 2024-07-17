#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int j;
    int n = 5;

    char str[5][100];
    char s[100];

    printf("Enter the name of 5 students:-\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
    }

    printf("In alphabetical order:-\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}