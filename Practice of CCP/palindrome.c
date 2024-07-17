#include <stdio.h>
#include <string.h>

// A function to reverse a string
void reverse(char str[], int len)
{
    // Initialize left and right pointers
    int left = 0;
    int right = len - 1;

    // Swap the characters until left < right
    while (left < right)
    {
        // Swap the left and right characters
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Increment left and decrement right
        left++;
        right--;
    }
}

// A function to check if a string is palindrome or not
int isPalindrome(char str[])
{
    // Get the length of the string
    int len = strlen(str);

    // Create a copy of the string
    char copy[len + 1];
    strcpy(copy, str);

    // Reverse the copy
    reverse(copy, len);

    // Compare the original and the reversed strings
    if (strcmp(str, copy) == 0)
    {
        // The strings are equal, so the input is palindrome
        return 1;
    }
    else
    {
        // The strings are not equal, so the input is not palindrome
        return 0;
    }
}

// The main function
int main()
{
    // Declare a string variable
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Read the input string
    scanf("%s", str);

    // Check if the input string is palindrome or not
    if (isPalindrome(str))
    {
        // Print the result
        printf("%s is a palindrome\n", str);
    }
    else
    {
        // Print the result
        printf("%s is not a palindrome\n", str);
    }

    // Return 0 to indicate normal termination
    return 0;
}
