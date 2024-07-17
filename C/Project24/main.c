// Include the standard input/output library
#include <stdio.h>

// Define a function to multiply two matrices
void matrix_mul(int A[3][3], int B[3][3], int C[3][3]) {
    // Iterate over the rows of A and columns of B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Initialize the element of the result matrix to zero
            C[i][j] = 0;
            // Compute the dot product of the ith row of A and the jth column of B
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Define the main function
int main() {
    // Declare the rows and columns of the matrices
    int r1, c1, r2, c2;
    // Input the rows and columns of the first matrix
    printf("Input the rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    // Check if the first matrix is 3*3
    if (r1 != 3 || c1 != 3) {
        printf("The first matrix must be 3*3\n");
        return 0;
    }
    // Declare the first matrix
    int A[3][3];
    // Input the elements of the first matrix
    printf("Input the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input the rows and columns of the second matrix
    printf("Input the rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    // Check if the second matrix is 3*3
    if (r2 != 3 || c2 != 3) {
        printf("The second matrix must be 3*3\n");
        return 0;
    }
    // Declare the second matrix
    int B[3][3];
    // Input the elements of the second matrix
    printf("Input the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Declare the result matrix
    int C[3][3];
    // Call the function to multiply the matrices
    matrix_mul(A, B, C);
    // Print the result matrix
    printf("The product of the matrices is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    // Return 0 to indicate successful execution
    printf("\n\n23CS043_Debdoot\n");
    return 0;
}
