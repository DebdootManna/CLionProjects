#include <stdio.h>

int main() {
    // declare and initialize a two-dimensional array of integers
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    
    // declare variables to store the sum of each row and each column
    int row_sum[3] = {0, 0, 0}; // initialize to zero
    int col_sum[4] = {0, 0, 0, 0}; // initialize to zero
    
    // loop over the rows and columns of the array
    for (int i = 0; i < 3; i++) { // loop over the rows
        for (int j = 0; j < 4; j++) { // loop over the columns
            // add the element to the row sum and the column sum
            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
    }
    
    // print the array and the sums
    printf("The array is:\n");
    for (int i = 0; i < 3; i++) { // loop over the rows
        for (int j = 0; j < 4; j++) { // loop over the columns
            // print the element with a space after it
            printf("%d ", matrix[i][j]);
        }
        // print the row sum with a new line after it
        printf("| %d\n", row_sum[i]);
    }
    // print a line of dashes to separate the array and the column sums
    printf("----------\n");
    for (int j = 0; j < 4; j++) { // loop over the columns
        // print the column sum with a space after it
        printf("%d ", col_sum[j]);
    }
    // print a new line at the end
    printf("\n");
    
    return 0;
}
