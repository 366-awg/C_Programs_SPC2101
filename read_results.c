/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 06/11/2025
Description: A C program that reads student examination records from a binary file and displays each student’s name and total marks.*/

#include <stdio.h>   // Standard input/output library for file handling and printing

// Structure to hold student details
struct Student {
    char name[50];     // Student's full name
    int regNumber;     // Registration number
    float totalMarks;  // Total marks obtained
};

int main() {
    struct Student student;   // Variable to store one record at a time
    FILE *file;               // File pointer

    // Open the binary file that contains student results for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        // If the file can't be opened, show an error message and stop the program
        printf("Error opening file.\n");
        return 1;
    }

    // Print a heading before displaying the results
    printf("Student Examination Results:\n");
    printf("----------------------------\n");

    // Read each student record from the file and display their name and marks
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\nMarks: %.2f\n\n", student.name, student.totalMarks);
    }

    // Close the file after reading
    fclose(file);

    return 0;  // End of the program
}
