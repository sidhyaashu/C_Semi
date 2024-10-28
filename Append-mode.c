
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