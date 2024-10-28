

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
