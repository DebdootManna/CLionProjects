#include <stdio.h>

int find_length(char string[]) {
    int len = 0, i;
    for (i = 0; string[i] != '\0'; i++) {
        len++;
    }
    return len;
}

void reverse_string(char string[]) {
    int i, j, len;
    char temp;
    len = find_length(string);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int compare_strings(char string1[], char string2[]) {
    int i;
    for (i = 0; string1[i] == string2[i]; i++) {
        if (string1[i] == '\0') {
            return 0;
        }
    }
    return (string1[i] - string2[i]);
}

void copy_string(char destination[], char source[]) {
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

void concatenate_strings(char destination[], char source[]) {
    int i, j;
    i = find_length(destination);
    for (j = 0; source[j] != '\0'; j++) {
        destination[i + j] = source[j];
    }
    destination[i + j] = '\0';
}

int main() {
    char option;
    char str1[100], str2[100], temp[100];

    printf("1. Length of a string\n");
    printf("2. Reverse a string\n");
    printf("3. Compare two strings\n");
    printf("4. Copy one string into another\n");
    printf("5. Concatenate two strings\n");
    printf("6. Exit.\n");

    printf("Enter an option:");

    scanf("%c", &option);

    switch(option) {
        case '1':
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length of the given string is %d.\n", find_length(str1));
            break;

        case '2':
            printf("Enter a string: ");
            scanf("%s", str1);
            reverse_string(str1);
            printf("Reversed string is %s.\n", str1);
            break;

        case '3':
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            if(compare_strings(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;

        case '4':
            printf("Enter first string: ");
            scanf("%s", str1);
            copy_string(temp, str1);
            printf("Copied String is %s.\n", temp);
            break;

        case '5':
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            concatenate_strings(str1, str2);
            printf("Concatenated String is %s.\n", str1);
            break;

        case '6':

            printf("Exiting the program.\n");
            printf("\n\n23CS043_Debdoot\n");
            break;

        default:
            printf("Invalid option entered.\n");
            break;
    }

}
