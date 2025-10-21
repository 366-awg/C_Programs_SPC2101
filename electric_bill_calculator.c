/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 21/10/2025
Description: A C program that calculates an electricity bill based on the number of units consumed using a tiered rate system.*/

#include <stdio.h> //Including standard input-output header file

//Function Prototype
float calculateElectricBill(float unit);

//Main Function
int main(void) { 
    float unit, total_bill; //Variables to store unit consumed and total bill amount
    
    printf("Enter unit consumed:"); //Prompting user to enter unit consumed
    scanf("%f", &unit); //Reading user input for unit consumed
    
    total_bill = calculateElectricBill(unit); //Calling function to calculate electric bill
    
     printf("Total bill: KES %.2f\n", total_bill); //Displaying the total bill amount

    return 0; //End program successfully
}

//Function to calculate electric bill based on unit consumed
float calculateElectricBill(float unit) { 
    float total_bill; //Variable to store total bill amount
    //Calculating bill based on tiered rate system
    if(unit <= 100) {
        total_bill = unit * 10;
    }
    else if(unit <= 200) {
        total_bill = ((unit-100) * 15) + 1000;
    }
    else {
        total_bill = ((unit-200) * 20) + 2500;
    }
    return total_bill; //Returning the total bill amount
}