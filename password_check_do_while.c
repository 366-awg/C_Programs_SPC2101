/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 09/10/2025
Description: A C program that keeps asking the user to enter a password until the correct one is entered, then displays “Access Granted".*/
#include <stdio.h>

int main() {
    int password; // Variable to store user-entered password
// Keep prompting the user until the correct password (1234) is entered
    do {
        printf("Enter password: "); // Prompt user for password
        scanf("%d", &password); // Read user input
    } while (password != 1234); // Continue loop if password is incorrect

    printf("Access Granted.\n"); // Display access granted message

    return 0; // End program successfully
}

