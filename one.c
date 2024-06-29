#include <stdio.h>

// Define the structure for student information
struct Student {
    char name[100];    // Array to store the student's name
    int age;           // Variable to store the student's age
    float totalMarks;  // Variable to store the student's total marks
};

// Function prototypes
void readStudentData(struct Student *s);
void displayStudentData(const struct Student *s);
float calculateAverageMarks(const struct Student *s1, const struct Student *s2);

int main() {
    // Declare two student variables
    struct Student student1, student2;

    // Read data for the first student
    printf("Enter details for student 1:\n");
    readStudentData(&student1);

    // Read data for the second student
    printf("Enter details for student 2:\n");
    readStudentData(&student2);

    // Display data for both students
    printf("\nStudent 1 Details:\n");
    displayStudentData(&student1);

    printf("\nStudent 2 Details:\n");
    displayStudentData(&student2);

    // Calculate and display the average of total marks
    float averageMarks = calculateAverageMarks(&student1, &student2);
    printf("\nAverage of total marks: %.2f\n", averageMarks);

    return 0;
}

// Function to read student data
void readStudentData(struct Student *s) {
    printf("Name: ");
    fgets(s->name, sizeof(s->name), stdin);

    printf("Age: ");
    scanf("%d", &s->age);
    getchar(); // Consume newline character left by scanf

    printf("Total marks: ");
    scanf("%f", &s->totalMarks);
    getchar(); // Consume newline character left by scanf
}

// Function to display student data
void displayStudentData(const struct Student *s) {
    printf("Name: %s", s->name);
    printf("Age: %d\n", s->age);
    printf("Total marks: %.2f\n", s->totalMarks);
}

// Function to calculate average marks
float calculateAverageMarks(const struct Student *s1, const struct Student *s2) {
    return (s1->totalMarks + s2->totalMarks) / 2.0;
}



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





//Program to Input and Display Student Data and Calculate Average Marks
#include <stdio.h>

// Define the structure for student information
struct Student {
    char name[100];    // Array to store the student's name
    int age;           // Variable to store the student's age
    float totalMarks;  // Variable to store the student's total marks
};

// Function prototypes
void readStudentData(struct Student *s);
void displayStudentData(const struct Student *s);
float calculateAverageMarks(const struct Student *s1, const struct Student *s2);

int main() {
    // Declare two student variables
    struct Student student1, student2;

    // Read data for the first student
    printf("Enter details for student 1:\n");
    readStudentData(&student1);

    // Read data for the second student
    printf("Enter details for student 2:\n");
    readStudentData(&student2);

    // Display data for both students
    printf("\nStudent 1 Details:\n");
    displayStudentData(&student1);

    printf("\nStudent 2 Details:\n");
    displayStudentData(&student2);

    // Calculate and display the average of total marks
    float averageMarks = calculateAverageMarks(&student1, &student2);
    printf("\nAverage of total marks: %.2f\n", averageMarks);

    return 0;
}

// Function to read student data
void readStudentData(struct Student *s) {
    printf("Name: ");
    fgets(s->name, sizeof(s->name), stdin);

    printf("Age: ");
    scanf("%d", &s->age);
    getchar(); // Consume newline character left by scanf

    printf("Total marks: ");
    scanf("%f", &s->totalMarks);
    getchar(); // Consume newline character left by scanf
}

// Function to display student data
void displayStudentData(const struct Student *s) {
    printf("Name: %s", s->name);
    printf("Age: %d\n", s->age);
    printf("Total marks: %.2f\n", s->totalMarks);
}

// Function to calculate average marks
float calculateAverageMarks(const struct Student *s1, const struct Student *s2) {
    return (s1->totalMarks + s2->totalMarks) / 2.0;
}




// write and append mode
#include <stdio.h>

void writeFile() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("File could not be opened for writing.\n");
        return;
    }

    fprintf(file, "This is written using write mode.\n");
    fclose(file);
}

void appendFile() {
    FILE *file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("File could not be opened for appending.\n");
        return;
    }

    fprintf(file, "This is appended using append mode.\n");
    fclose(file);
}

int main() {
    // Write to the file using write mode
    writeFile();

    // Append to the file using append mode
    appendFile();

    // Display the contents of the file
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("File could not be opened for reading.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}


//Program to Copy Data from One File to Another
#include <stdio.h>
#include <stdlib.h>

void copyFile(const char *sourceFile, const char *destinationFile) {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Could not open source file %s.\n", sourceFile);
        exit(EXIT_FAILURE);
    }

    // Open destination file in write mode
    destination = fopen(destinationFile, "w");
    if (destination == NULL) {
        fclose(source);
        printf("Error: Could not open destination file %s.\n", destinationFile);
        exit(EXIT_FAILURE);
    }

    // Read from source file and write to destination file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully from %s to %s.\n", sourceFile, destinationFile);

    // Close both files
    fclose(source);
    fclose(destination);
}

int main() {
    const char *sourceFile = "source.txt";
    const char *destinationFile = "destination.txt";

    copyFile(sourceFile, destinationFile);

    return 0;
}




// Write a program to count the number of words in a file in C.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char ch;
    int inWord = 0;
    int wordCount = 0;

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;  // We are no longer in a word
        } else if (inWord == 0) {
            inWord = 1;  // We are entering a word
            wordCount++; // Count the word
        }
    }

    // Close the file
    fclose(file);

    // Print the word count
    printf("Number of words in the file: %d\n", wordCount);

    return 0;
}



//Program to Write Data to a File in C
#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "output.txt";
    char data[] = "This is some data written to the file.";

    // Open the file in write mode
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file %s for writing.\n", filename);
        return 1;
    }

    // Write data to the file
    fprintf(file, "%s\n", data);

    // Close the file
    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}



// Program to Read Data from a File in C
#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "output.txt";
    char ch;

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s for reading.\n", filename);
        return 1;
    }

    // Read data from the file and print it
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}


// Amstrong #include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if num is an Armstrong number
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}



/*
An array of structures in C is a way to group multiple instances of a structure together, allowing you to work with collections of related data. This is particularly useful when you need to handle multiple records of the same type, such as a list of students, employees, or products.

*/
#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare an array of structures
    struct Student students[3];

    // Input data for each student
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the information
    printf("\nDisplaying Information:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}


// string function strchr
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char ch = 'w';
    char *result = strchr(str, ch);
    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found\n", ch);
    }
    return 0;
}



// prime or not
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
    if (num <= 3) return true;   // 2 and 3 are prime numbers

    // Check from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;  // If num is divisible by any number, it is not prime
        }
    }
    return true;  // If no divisors are found, num is prime
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
