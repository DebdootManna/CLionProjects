#include <stdio.h>

union library
{
    int accession_number;
    char title[50];
    char author[50];
    int price;
    int flag;
};

typedef union library lib; 

void main()
{
    lib access_num, Title, Author, Price, f;

    printf("Enter the Accession number of the book : ");
    scanf("%d", &access_num.accession_number);

    printf("Enter the Tilte of the Book : ");
    scanf(" %[^\n]", &Title.title);

    printf("Enter the Author's name : ");
    scanf(" %[^\n]", &Author.author);

    printf("Enter the price of the book : ");
    scanf("%d", &Price.price);

    printf("\n\nIs the book issued?\nIf yes then enter 1 else enter 0 : ");
    scanf("%d", &f.flag);

    printf("Accession Number\tTitle\tAuthor's name\tPrice\tAvailability\n");
    printf("%d\t%s\t%s\t%d\t%d",access_num.accession_number, Title.title, Author.author, Price.price, f.flag);

    printf("\n\n23CS043_Debdoot\n");
}