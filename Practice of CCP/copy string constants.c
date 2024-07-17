#include <stdio.h>
#include <string.h>

int main()
{
    // Declare three string variables
    char s1[100], s2[100], s3[100];
    
    // Read two string constants into s1 and s2
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    
    // Compare whether they are equal or not
    if (strcmp(s1, s2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
        
        // If they are not, join them together
        strcat(s1, s2);
        printf("The joined string is %s\n", s1);
    }
    
    // Copy the contents of s1 to the variable s3
    strcpy(s3, s1);
    printf("The copied string is %s\n", s3);
    
    // Print the contents of all the three variables and their lengths
    printf("The contents and lengths of the strings are:\n");
    printf("s1: %s, length: %d\n", s1, strlen(s1));
    printf("s2: %s, length: %d\n", s2, strlen(s2));
    printf("s3: %s, length: %d\n", s3, strlen(s3));
    
    return 0;
}
