/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 01/10/2025
Description: A C program that checks if a student is eligible for final exams.*/
#include <stdio.h>  

int main() {
    int attendance, average_marks; // Declare variables for attendance and marks
    
    printf("Enter your attendance in percentage:"); // Prompt user for attendance in percentage 
    scanf("%d", &attendance); // Read attendance input from user
    
    printf("Enter your average marks:"); // Prompt user for average marks
    scanf("%d", &average_marks); // Read marks input from user
    
    if(attendance >= 75 && average_marks  >= 40) { // Check eligibility criteria
        printf("ELIGIBLE"); }  // Print if eligible
    else {
        printf("NOT ELIGIBLE"); // Print if not eligible

    }
    
    
return 0; // End program successfully
}