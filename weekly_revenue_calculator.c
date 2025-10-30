/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 30/10/2025
Description: A C program that records daily hotel revenues and computes the total and average revenue for the week.*/

#include <stdio.h> //Including standard input-output header file

//Main Function
int main () {
    int i; //Loop counter
    float total = 0; //Variable to store total revenue
    float average; //Variable to store average revenue
    float revenue[7]; //Array to store daily revenues for 7 days
    
    printf("Enter the daily revenue:\n"); //Prompting user to enter daily revenues
    for (i=0; i<7; i++) { //Loop to read revenues for 7 days
        printf("Day %d:", i + 1); //Prompt for each day
        scanf("%f", &revenue[i]); //Reading user input for daily revenue
    }
    printf("\nDaily revenue entered:\n"); //Displaying the daily revenues
    
    for (i=0; i<7; i++) { //Loop to display and calculate total revenue
        printf("Day %d: %.2f\n", i+1,revenue[i]); //Displaying daily revenue
        total = total + revenue[i]; //Calculating total revenue
       } 
        average = total/7; //Calculating average revenue
    printf("\nThe total weekly revenue is: %.2f", total); //Displaying total revenue
    printf("\nThe average daily revenue is: %.2f", average); //Displaying average revenue
return 0; //End program successfully
}

