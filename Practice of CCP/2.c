#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year if perfectly divisible by 400
    if (year % 400 == 0) {
        printf("%d is a leap year.", year);
    }
    // Not a leap year if divisible by 100 but not divisible by 400
    else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
    }
    
    /* The number **400** is used in the program to determine whether a year is a leap year or not because it is a **divisor** that helps identify **century years**.
    According to the rules for leap years, a century year is a leap year only if it is **perfectly divisible by 400** .
    This means that years like 1600 and 2000 are leap years, while years like 1700, 1800, and 1900 are not .
    By including this condition in the program, we can accurately determine whether a given year is a leap year or not.*/   
    
    // Leap year if not divisible by 100 but divisible by 4
    else if (year % 4 == 0) {
        printf("%d is a leap year.", year);
    }
    // All other years are not leap years
    else {
        printf("%d is not a leap year.", year);
    }

    return 0;
}
