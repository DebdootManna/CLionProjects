#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50]; // Assuming each name has a maximum length of 50 characters

    // Collect names of 5 students
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Sort the names in alphabetical order using bubble sort
    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names[j] and names[j + 1]
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    printf("\nSorted names in alphabetical order:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", names[i]);
    }
    printf("\n\n23CS043_Debdoot\n");
    return 0;
}
