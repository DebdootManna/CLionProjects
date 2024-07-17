#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch; // declare a character variable
    printf("Enter a character: "); // prompt the user to input a character
    ch = getchar(); // read the character using getchar() function
    printf("The character you entered is: "); // print the character using putchar() function
    putchar(ch);
    printf("\n"); // print a new line

    // check the character category using character test functions
    if (isalnum(ch)) // if the character is alphanumeric
        printf("%c is alphanumeric.\n", ch);
    if (isalpha(ch)) // if the character is alphabetic
        printf("%c is alphabetic.\n", ch);
    if (isdigit(ch)) // if the character is a digit
        printf("%c is a digit.\n", ch);
    if (islower(ch)) // if the character is lowercase
        printf("%c is lowercase.\n", ch);
    if (isprint(ch)) // if the character is printable
        printf("%c is printable.\n", ch);
    if (ispunct(ch)) // if the character is punctuation
        printf("%c is punctuation.\n", ch);
    if (isspace(ch)) // if the character is whitespace
        printf("%c is whitespace.\n", ch);
    if (isupper(ch)) // if the character is uppercase
        printf("%c is uppercase.\n", ch);

    // convert uppercase alphabet to lowercase and vice versa using toupper() and tolower() functions
    if (isupper(ch)) // if the character is uppercase, convert it to lowercase
        printf("The lowercase of %c is %c.\n", ch, tolower(ch));
    else if (islower(ch)) // if the character is lowercase, convert it to uppercase
        printf("The uppercase of %c is %c.\n", ch, toupper(ch));
    else // otherwise, do not change the character
        printf("The character %c cannot be converted.\n", ch);

    printf("23CS043_Debdoot");

    return 0;
}
