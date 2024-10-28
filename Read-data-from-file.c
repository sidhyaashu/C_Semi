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