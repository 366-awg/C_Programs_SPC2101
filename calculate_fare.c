/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 23/10/2025
Description: A C program that defines a function that calculates total fare at a rate of KSh. 50 per kilometer given the distance travelled.*/
#include <stdio.h> //Including standard input-output header file

//Function Prototype
float calculateFare(float distance); 

//Main Function
int main(void) { 
    float distance, fare; //Variables to store distance travelled and fare amount
    
    printf("Enter distance travelled in KM:"); //Prompting user to enter distance travelled
    scanf("%f", &distance); //Reading user input for distance travelled
    
    fare = calculateFare(distance); //Calling function to calculate fare
    
    printf("The fare is: KES %.2f", fare); //Displaying the fare amount
    
    return 0; //End program successfully
    
}

//Function to calculate fare based on distance travelled
float calculateFare(float distance) { 
    float fare; //Variable to store fare amount
    fare = distance * 50; //Calculating fare at a rate of KSh. 50 per kilometer
    return fare; //Returning the fare amount
}