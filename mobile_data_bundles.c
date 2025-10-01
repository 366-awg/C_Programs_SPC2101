/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 01/10/2025
Description: A C program that displays mobile data bundle options and processes user selection with pricing.*/
#include <stdio.h>  

int main() {
   int choice; // Variable to store user choice
   
   // Display data bundle options
   printf("Select data bundle: \n"); 
   printf("1. 100MB @ 50 KES \n");
   printf("2. 500MB @ 200 KES \n");
   printf("3. 1GB @ 350 KES \n");
   printf("4. 2GB @ 600 KES \n");
   
   
   printf("\n Enter your choice (1-4):"); // Prompt user for choice
   scanf("%d", &choice); // Read user input
  
   // Process user choice and display corresponding cost
   switch (choice) { 
       case 1:
       printf("You selected 100MB. Cost = 50 KES");
       break;
       case 2:
       printf("You selected 500MB. Cost = 200 KES");
       break;
       case 3:
       printf("You selected 1GB. Cost = 350 KES");
       break;
       case 4:
       printf("You selected 2GB. Cost = 600 KES");
       break;
       default:
       printf("Invalid choice");
   }
   return 0; // End program successfully
}