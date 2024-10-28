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