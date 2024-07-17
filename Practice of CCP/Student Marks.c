#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 10

int main()
{
    int n, m;
    int marks[MAX_STUDENTS][MAX_SUBJECTS];
    int total[MAX_STUDENTS];
    int i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        printf("Enter the marks of student %d:\n", i + 1);
        for (j = 0; j < m; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        total[i] = 0;
        for (j = 0; j < m; j++)
        {
            total[i] += marks[i][j];
        }
    }

    printf("The total marks of each student are:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    return 0;
}
