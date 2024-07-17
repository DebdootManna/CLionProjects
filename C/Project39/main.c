#include <stdio.h>

int main()
{
    FILE *file;
    char letter;

    // Open the file for writing
    file = fopen("ALPHABETS.txt", "w");
    if (file == NULL)
    {
        perror("Error creating file");
        return 1;
    }

    // Write the letters 'A' to 'Z' into the file
    for (letter = 'A'; letter <= 'Z'; ++letter)
    {
        fputc(letter, file);
    }

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("ALPHABETS.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Move the file pointer to the end of the file
    fseek(file, 0, SEEK_END);

    // Print the contents in reverse order
    while (ftell(file) > 0)
    {
        fseek(file, -26, SEEK_CUR); // Move one position before the current position
        letter = fgetc(file);

        // Print the character on the screen
        putchar(letter);

        if (ftell(file) == 26)
        {
            break;
        }
    }

    // Move the file pointer to the beginning of the file
    rewind(file);

    // Close the file
    fclose(file);

    printf("\n\n23CS023_ANANYA\n");
    return 0;
}