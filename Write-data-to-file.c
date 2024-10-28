
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
