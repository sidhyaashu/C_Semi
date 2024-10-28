//Here is a C program that defines a structure for a library catalog and provides functionality to read and display the details of multiple books in the catalog.

//library
#include <stdio.h>

// Define the structure for a book in the library catalog
struct book {
    int accessNumber;      // Access number of the book
    char author[100];      // Author's name
    char title[100];       // Title of the book
    int yearOfPublication; // Year of publication
    char publisher[100];   // Publisher's name
    float price;           // Price of the book
};

// Function prototypes
void readBookData(struct book *b);
void displayBookData(const struct book *b);

int main() {
    int n;

    // Ask for the number of books
    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Declare an array of books
    struct book library[n];

    // Read data for each book
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        readBookData(&library[i]);
    }

    // Display data for each book
    printf("\nLibrary Catalogue:\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        displayBookData(&library[i]);
    }

    return 0;
}

// Function to read book data
void readBookData(struct book *b) {
    printf("Access number: ");
    scanf("%d", &b->accessNumber);
    getchar(); // Consume newline character left by scanf

    printf("Author's name: ");
    fgets(b->author, sizeof(b->author), stdin);

    printf("Title of the book: ");
    fgets(b->title, sizeof(b->title), stdin);

    printf("Year of publication: ");
    scanf("%d", &b->yearOfPublication);
    getchar(); // Consume newline character left by scanf

    printf("Publisher's name: ");
    fgets(b->publisher, sizeof(b->publisher), stdin);

    printf("Price: ");
    scanf("%f", &b->price);
    getchar(); // Consume newline character left by scanf
}

// Function to display book data
void displayBookData(const struct book *b) {
    printf("Access number: %d\n", b->accessNumber);
    printf("Author's name: %s", b->author);
    printf("Title of the book: %s", b->title);
    printf("Year of publication: %d\n", b->yearOfPublication);
    printf("Publisher's name: %s", b->publisher);
    printf("Price: %.2f\n", b->price);
}
