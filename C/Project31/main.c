#include <stdio.h>

// Creating union for library.
union library
{
    int accession_number;
    char title[50];
    char author[50];
    int price;
    int flag;
};

typedef union library lib; // Renaming structure library to lib.

void main()
{
    // Creating members of the lib.
    lib access_num, Title, Author, Price, f;

    // Scanning the book_info.
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

    // Printing book_info.
    printf("\n\nAccession Number\tTitle\tAuthor's name\tPrice\tAvailability\n");
    printf("%d\t%s\t%s\t%d\t%s", access_num.accession_number, Title.title, Author.author, Price.price, (f.flag == 1 ? "Yes" : "No"));

    printf("\n\n23CS043_Debdoot\n");
}