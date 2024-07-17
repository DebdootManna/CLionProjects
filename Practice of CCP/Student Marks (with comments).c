#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 10

int main()
{
    int n, m; // n is the number of students, m is the number of subjects
    int marks[MAX_STUDENTS][MAX_SUBJECTS]; // marks[i][j] is the mark of the i-th student in the j-th subject
    int total[MAX_STUDENTS]; // total[i] is the total mark of the i-th student
    int i, j; // loop variables

    // Read the number of students and subjects
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);

    // Read the marks of each student in each subject
    for (i = 0; i < n; i++)
    {
        printf("Enter the marks of student %d:\n", i + 1);
        for (j = 0; j < m; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Compute the total marks of each student
    for (i = 0; i < n; i++)
    {
        total[i] = 0; // initialize the total mark to zero
        for (j = 0; j < m; j++)
        {
            total[i] += marks[i][j]; // add the mark of each subject to the total mark
        }
    }

    // Print the total marks of each student
    printf("The total marks of each student are:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    return 0;
}
