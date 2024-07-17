#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    printf("Enter something:-\n");
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for (int i = 0; i < strlen(s); i++)
    {
        if (isspace(s[i]))
        {
            printf("\n");
            continue;
        }
        printf("%c", s[i]);
    }

    return 0;
}