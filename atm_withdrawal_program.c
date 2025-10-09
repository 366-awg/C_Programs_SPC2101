/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 09/10/2025
Description: A C program that allows bank withdrawals until the account balance becomes zero or negative.*/
#include <stdio.h>

int main() {
    float withdraw, balance;
      // Ask the user to enter initial account balance
      printf("Enter initial account balance: ");
      scanf("%f", &balance);
    
    // Continue withdrawals while balance is greater than 0
     while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;  // Subtract withdrawal amount from balance
        printf("Current balance: %.2f\n", balance);  // Display updated balance
    }

    printf("Insufficient balance. Transaction stopped.\n");

    return 0; // End program successfully
}