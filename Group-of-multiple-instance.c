
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
