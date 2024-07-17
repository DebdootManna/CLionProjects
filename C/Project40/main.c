#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file1, *file2, *file3;
    int num;

    // Check if the correct number of command line arguments is provided
    if (argc != 4)
    {
        printf("Usage: %s Data1.txt Data2.txt Data3.txt\n", argv[0]);
        return 1;
    }

    // Open the first input file for reading
    file1 = fopen(argv[1], "r");
    if (file1 == NULL)
    {
        perror("Error opening first input file");
        return 1;
    }

    // Open the second input file for reading
    file2 = fopen(argv[2], "r");
    if (file2 == NULL)
    {
        perror("Error opening second input file");
        fclose(file1);
        return 1;
    }

    // Open the output file for writing
    file3 = fopen(argv[3], "w");
    if (file3 == NULL)
    {
        perror("Error creating output file");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Read and merge integers from the first file
    while (fscanf(file1, "%d", &num) == 1)
    {
        fprintf(file3, "%d ", num);
    }

    // Read and merge integers from the second file
    while (fscanf(file2, "%d", &num) == 1)
    {
        fprintf(file3, "%d ", num);
    }

    // Close all the files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Merge successful. Merged data stored in %s\n", argv[3]);

    printf("\n\n23CS043_Debdoot\n");
    return 0;
}