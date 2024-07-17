#include <stdio.h>
// This code is by Debdoot 23CS043.

struct Book_Detail
{
    float amount;
    char title[100];
    char author[100];
};

typedef struct Book_Detail bookInfo;

void books(bookInfo a)
{
    printf("%s\t|\t%s\t|\t%.2f\n", a.title, a.author, a.amount);
}

void main()
{
    bookInfo book[10];
    int num;

    printf("Enter the number of books:");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the title of the book #%d:", i + 1);
        scanf(" %[^\n]", book[i].title);
        printf("Enter the author of the book #%d:", i + 1);
        scanf(" %[^\n]", book[i].author);
        printf("Enter the amount of the book #%d:", i + 1);
        scanf("%f", &book[i].amount);
    }

    printf("Book Title\t|\tAuthor name\t|\tAmount of book\n");

    for (int i = 0; i < num; i++)
    {
        books(book[i]);
    }

    printf("\n23CS043_Debdoot\n");
}