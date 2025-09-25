/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 25/09/2025
Description: A C program that calculates compound interest using yearly compounding.*/
#include <stdio.h> 

int main() {  // Main function where program execution begins
    float principal, time, rate, compound_interest, amount;  // Declare variables for principal, time, rate, interest, and total amount
    int i;  // Declare loop counter for compounding periods

    printf("Enter principal amount: ");  // Prompt user for principal amount
    scanf("%f", &principal);  // Read principal input from user
    printf("Enter time (in years): ");  // Prompt user for time period
    scanf("%f", &time);  // Read time input from user
    printf("Enter rate of interest: ");  // Prompt user for interest rate
    scanf("%f", &rate);  // Read rate input from user

    amount = principal;  // Initialize amount with principal value
    for (i = 0; i < time; i++) {  // Loop for each year to apply compounding
        amount = amount * (1 + rate / 100);  // Calculate new amount after yearly compounding
    }

    compound_interest = amount - principal;  // Compute compound interest by subtracting principal

    printf("Compound Interest = %.2f\n", compound_interest);  // Display the calculated compound interest

    return 0;  // Return 0 to indicate successful execution
}
