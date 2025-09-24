/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 24/09/2025
Description: A C program that checks loan eligibility based on age and income criteria.*/
#include <stdio.h>  

int main() {  // Main function where program execution begins
    int age;        // Declare integer variable to store user's age
    float income;   // Declare float variable to store user's annual income
    
    // Prompt user to enter their age
    printf("Please enter your age: ");
    // Read the age input from user and store it in the age variable
    scanf("%d", &age);
    
    // Prompt user to enter their annual income 
    printf("Please enter your annual income: Sh");
    // Read the income input from user and store it in the income variable
    scanf("%f", &income);
    
    // Check if user meets both loan criteria: age >= 21 AND income >= 21000
    if (age >= 21 && income >= 21000) {
        // If both conditions are true, print congratulations message
        printf("Congratulations you qualify for a loan.\n");
    } else {
        // If either condition fails, print reject message
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    
    return 0;  
}