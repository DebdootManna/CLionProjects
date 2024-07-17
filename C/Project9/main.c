#include <stdio.h>

int main() {
    char characteristics[51]; // 50 characters + 1 null terminator
    printf("Enter your characteristics (not more than 50 characters):\n");
    gets(characteristics); // Avoid using gets due to security issues

    printf("Your characteristics: ");
    puts(characteristics);

    printf("23CS043_Debdoot");

    return 0;
}
