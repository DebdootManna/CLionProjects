#include <stdio.h>
#define ROWS 4
#define COLS 10

int main()
{
    // Declare and initialize a 2D character array
    char fruits[ROWS][COLS] = { "apple", "banana", "cherry", "date" };
    
    // Print the array elements using nested loops
    for (int i = 0; i < ROWS; i++)
    {
        printf("fruits[%d] = ", i);
        for (int j = 0; j < COLS; j++)
        {
            printf("%c", fruits[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
As you can see, the array fruits has 4 rows and 10 columns.
Each row stores a string that represents the name of a fruit.
The string is terminated by a null character \0 which indicates the end of the string.
The remaining elements in each row are filled with \0 as well to avoid garbage values.
We can access the array elements using the index notation fruits[i][j] where i is the row number and j is the column number.
We can also use the name of the array fruits as a pointer to the first element of the array.
For example, fruits[0] is equivalent to *(fruits + 0) which points to the first row of the array.
Similarly, fruits[0][0] is equivalent to *(*(fruits + 0) + 0) which points to the first element of the first row of the array.
*/