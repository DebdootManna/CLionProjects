#include <stdio.h>

// Define a structure for Book Detail
struct BookDetail {
    char title[50]; // Book Title
    char author[50]; // Author name
    float amount; // Amount of book in float
};

// Declare a function to display the Book Detail
void display(struct BookDetail b);

// Main function
int main() {
    // Create a variable of type BookDetail
    struct BookDetail book;

    // Input the Book Detail from the user
    printf("Enter the book title: ");
    scanf("%[^\n]%*c", book.title); // Read a string with spaces
    printf("Enter the author name: ");
    scanf("%[^\n]%*c", book.author); // Read a string with spaces
    printf("Enter the amount of book: ");
    scanf("%f", &book.amount); // Read a float value

    // Display the Book Detail by passing the structure as a function argument
    display(book);

    return 0;
}

// Define the function to display the Book Detail
void display(struct BookDetail b) {
    // Print the Book Detail in appropriate format
    printf("\nBook Detail:\n");
    printf("Book Title: %s\n", b.title);
    printf("Author Name: %s\n", b.author);
    printf("Amount of Book: %.2f\n", b.amount);

    printf("\n\n23CS043_Debdoot\n");
}
