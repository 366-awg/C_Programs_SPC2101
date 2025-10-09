/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 09/10/2025
Description: A C program that lets the player guess a secret number between 1 and 20 and counts the number of attempts.*/
#include <stdio.h>

int main() {
    int secret = 7; // Secret number to be guessed
    int guess; // Variable to store user's guess
    int attempts = 0; // Counter for number of attempts

    printf("Welcome to the Number Guessing Game!\n"); // Welcome message
    printf("I have chosen a number between 1 and 20.\n"); // Prompt message

    while (1) { // Infinite loop until the correct guess
        printf("Enter your guess: "); // Prompt user for a guess
        scanf("%d", &guess); // Read user input
        attempts++; // Increment attempt counter

         // Check the user's guess against the secret number

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break; // Exit loop on correct guess
        }
    }

    return 0;
}