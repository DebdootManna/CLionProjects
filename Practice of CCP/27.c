#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file in binary read mode
    sourceFile = fopen("source.txt", "rb");
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Open the destination file in binary write mode
    destinationFile = fopen("destination.txt", "wb");
    if (destinationFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    // Copy contents from source to destination
    while (1)
    {
        ch = fgetc(sourceFile);

        // Check for end of file
        if (feof(sourceFile))
        {
            break;
        }

        // Check for error during read
        if (ferror(sourceFile))
        {
            perror("Error reading from source file");
            fclose(sourceFile);
            fclose(destinationFile);
            return EXIT_FAILURE;
        }

        // Write the character to the destination file
        fputc(ch, destinationFile);

        // Check for error during write
        if (ferror(destinationFile))
        {
            perror("Error writing to destination file");
            fclose(sourceFile);
            fclose(destinationFile);
            return EXIT_FAILURE;
        }

        // Print the character on the screen
        putchar(ch);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return EXIT_FAILURE;
}