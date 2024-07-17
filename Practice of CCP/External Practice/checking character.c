#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("Enter a character: ");
    a = getchar();
    putchar(a);
    printf("\n");
    
    if (isalnum(a))
    {
        printf("\n%c is alphanumeric.", a);
    }
    if (isdigit(a))
    {
        printf("\n%c is digit.", a);
    }
    if (islower(a))
    {
        printf("\n%c is lowercase. Uppercase is %c", a, toupper(a));
    }
    if (isupper(a))
    {
        printf("\n%c is uppercase. Lowercase is %c", a, tolower(a));
    }
    if (isspace(a))
    {
        printf("\n%c is white space.", a);
    }
    if (isprint(a))
    {
        printf("\n%c is printable.", a);
    }
    else
    {
        printf("\n%c is non-printable.", a);
    }
    return 0;
}