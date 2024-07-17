#include <stdio.h>

struct Credentials
{
    int age;
    char name[50];
    char address[100];
};

struct Employee
{
    struct Credentials c1;
    float salary;
};

typedef struct Employee Info;

int main()
{
    Info e1;

    printf("Enter the name and age of employee: ");
    scanf(" %[^\n] %d", e1.c1.name, &e1.c1.age);
    printf("Enter address: ");
    scanf(" %[^\n]", e1.c1.address);
    printf("Enter salary of employee:");
    scanf("%f", &e1.salary);

    printf("name : %s\n", e1.c1.name);
    printf("age : %d\n", e1.c1.age);
    printf("address : %s\n", e1.c1.address);
    printf("salary : %.2f\n", e1.salary);
    printf("Process finished\n");

    printf("\n\n23CS043_Debdoot\n");
    return 0;
}