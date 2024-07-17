#include <stdio.h>

int main() {
    int marks[10], i, fail = 0, pass = 0, first_class = 0, distinction = 0;

    printf("Enter the marks of 10 students:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);

        if (marks[i] >= 70) {
            distinction++;
        } else if (marks[i] >= 60) {
            first_class++;
        } else if (marks[i] >= 40) {
            pass++;
        } else {
            fail++;
        }
    }

    printf("\nDISTINCTION %d\nFIRST CLASS %d\nPASS %d\nFAIL %d\n", distinction, first_class, pass, fail);

    return 0;
}
