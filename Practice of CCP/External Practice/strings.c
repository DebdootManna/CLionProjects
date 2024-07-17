#include <stdio.h>

int main() {
    char str1[100], str2[100], ch;
    int i, j, choice;

    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);

    printf("Enter your choice:\n");
    printf("1. Length of string\n");
    printf("2. Reverse string\n");
    printf("3. Compare two strings\n");
    printf("4. Copy one string into another string\n");
    printf("5. Concatenate two strings\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (i = 0; str1[i] != '\0'; i++);
            printf("Length of string 1: %d\n", i);
            for (i = 0; str2[i] != '\0'; i++);
            printf("Length of string 2: %d\n", i);
            break;

        case 2:
            for (i = 0; str1[i] != '\0'; i++);
            for (j = i - 1; j >= 0; j--)
                printf("%c", str1[j]);
            printf("\n");
            for (i = 0; str2[i] != '\0'; i++);
            for (j = i - 1; j >= 0; j--)
                printf("%c", str2[j]);
            printf("\n");
            break;

        case 3:
            i = 0;
            while (str1[i] == str2[i] && str1[i] != '\0')
                i++;
            if (str1[i] > str2[i])
                printf("String 1 is greater than string 2\n");
            else if (str1[i] < str2[i])
                printf("String 2 is greater than string 1\n");
            else
                printf("Both strings are equal\n");
            break;

        case 4:
            i = 0;
            while (str1[i] != '\0') {
                str2[i] = str1[i];
                i++;
            }
            str2[i] = '\0';
            printf("String 1: %s\n", str1);
            printf("String 2: %s\n", str2);
            break;

        case 5:
            i = 0;
            while (str1[i] != '\0')
                i++;
            j = 0;
            while (str2[j] != '\0') {
                str1[i] = str2[j];
                i++;
                j++;
            }
            str1[i] = '\0';
            printf("Concatenated string: %s\n", str1);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
