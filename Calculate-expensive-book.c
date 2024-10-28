
//Program to Input and Display Book Data and Find the Most Expensive Book

#include <stdio.h>

// Define the structure for book information
struct Book {
    char title[100];   // Array to store the book title
    char author[100];  // Array to store the author's name
    float price;       // Variable to store the price of the book
};

// Function prototypes
void readBookData(struct Book *b);
void displayBookData(const struct Book *b);
struct Book findMostExpensiveBook(const struct Book books[], int n);

int main() {
    // Declare an array of three books
    struct Book books[3];

    // Read data for each book
    for (int i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        readBookData(&books[i]);
    }

    // Find the most expensive book
    struct Book mostExpensive = findMostExpensiveBook(books, 3);

    // Display the most expensive book's data
    printf("\nThe most expensive book is:\n");
    displayBookData(&mostExpensive);

    return 0;
}

// Function to read book data
void readBookData(struct Book *b) {
    printf("Title: ");
    fgets(b->title, sizeof(b->title), stdin);
    
    printf("Author: ");
    fgets(b->author, sizeof(b->author), stdin);

    printf("Price: ");
    scanf("%f", &b->price);
    getchar(); // Consume newline character left by scanf
}

// Function to display book data
void displayBookData(const struct Book *b) {
    printf("Title: %s", b->title);
    printf("Author: %s", b->author);
    printf("Price: %.2f\n", b->price);
}

// Function to find the most expensive book
struct Book findMostExpensiveBook(const struct Book books[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }
    return books[maxIndex];
}

