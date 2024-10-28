
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

