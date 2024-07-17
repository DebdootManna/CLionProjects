#include <stdio.h>
// A function to copy one string to another
void copyString(char *source, char *destination)
{
    // Loop until the end of source string
    while (*source != '\0')
    {
        // Copy the current character from source to destination
        *destination = *source;
        // Move to the next character in both strings
        source++;
        destination++;
    }
    // Add a null terminator at the end of destination string
    *destination = '\0';
}

// A function to print a string
void printString(char *str)
{
    // Loop until the end of string
    while (*str != '\0')
    {
        // Print the current character
        printf("%c", *str);
        // Move to the next character
        str++;
    }
    // Print a new line
    printf("\n");
}

// The main function
int main()
{
    // Declare and initialize two strings
    char source[] = "Hello, world!";
    char destination[20];
    // Print the source string
    printf("Source string: ");
    printString(source);
    // Copy the source string to the destination string
    copyString(source, destination);
    // Print the destination string
    printf("Destination string: ");
    printString(destination);
    // Return 0 to indicate successful execution
    return 0;
}
