/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 01/10/2025
Description: A C program that converts a temperature value from Fahrenheit to Celsius using a custom convertToCelsius() function*/
#include <stdio.h> //Including standard input-output header file

//Function Prototype
float convertToCelsius(float F);

//Main Function
int main(void) {
    float C, F; //Variables to store temperature in Celsius and Fahrenheit
    
    printf("Enter temperature in Fahrenheit:"); //Prompting user to enter temperature in Fahrenheit
    scanf("%f", &F); //Reading user input for temperature in Fahrenheit
    
    C = convertToCelsius(F); //Calling function to convert Fahrenheit to Celsius
    
    printf("The temperature in Celsius is: %.2f °C", C); //Displaying the temperature in Celsius
    
    return 0; //End program successfully
    
}

//Function to convert Fahrenheit to Celsius
float convertToCelsius(float F) { 
    float C; //Variable to store temperature in Celsius
    C = (F-32) * 5/9; //Converting Fahrenheit to Celsius using the formula
    return C; //Returning the temperature in Celsius
}