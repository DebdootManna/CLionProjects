#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;

    // Step 1: Use calloc() to create a character string
    printf("Enter a string: ");
    str = (char *)calloc(50, sizeof(char)); // Allocate memory for a string of size 50

    if (str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Step 2: Input a string into the allocated memory
    scanf("%s", str);
    printf("Entered string: %s\n", str);

    // Step 3: Use realloc() to modify the block to store a larger string
    printf("Enter a larger string length: ");
    int newSize;
    scanf("%d", &newSize);

    // Resize the block using realloc()
    str = (char *)realloc(str, newSize * sizeof(char));

    if (str == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1; // Exit with an error code
    }

    // Input a larger string into the modified block
    scanf("%s", str);
    printf("Modified string: %s\n", str);

    // Step 4: Free the allocated memory
    free(str);

    printf("\n\n23CS043_Debdoot\n");
    return 0;
}