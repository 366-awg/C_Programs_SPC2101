/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 19/09/2025
Description: A program to prompt the user to enter their height, bank balance and phone number*/
#include <stdio.h>

int main() {
    float height; // Using float to represent decimal heights 
    double bank_balance; //Bank balance, using double for better precision 
    long long phone_number; // Phone number, stored as long long since it’s a very large integer

//Prompting the user to enter their height in meters
    printf("Enter your height in meters: ");
    scanf("%f", &height);

//Prompting the user to enter their bank balance in Kenyan Shillings
    printf("Enter your bank balance in Kenyan Shillings: ");
    scanf("%lf", &bank_balance);

//Prompting the user to enter their phone number
    printf("Enter your phone number: ");
    scanf("%lld", &phone_number);

//Displaying user information
    printf("\n--- User Information ---\n");
    printf("Height: %.2f m\n", height); 
    printf("Bank Balance: %.2lf KES\n", bank_balance);
    printf("Phone Number: %lld\n", phone_number);

    return 0;
}

