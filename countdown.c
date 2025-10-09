/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 09/10/2025
Description: A C program that displays a countdown from 100 to 50 using a decrementing for loop.*/
#include <stdio.h>

int main() {
    int i; // Declare an integer variable i
    
    for(i=100;i>=50;i--)// For loop: initialize i=100; run while i >= 50; decrement i by 1 after each iteration
    {
        printf("%d \n", i); // Print the current value of i followed by a newline
    }
    return 0;
}