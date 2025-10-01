/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 01/10/2025
Description: A C program that calculates water bill costs using tiered pricing based on consumption units.*/
#include <stdio.h>

int main() {
   int unit; // Variable to store water consumption units
   float total_amount; // Variable to store calculated total bill
   
   printf("Water units consumed: ");  // Prompt user for water units
   scanf("%d", &unit); // Read water units input from user
 
 // Calculate bill based on tiered pricing structure
 if (unit <=30) {
     total_amount = unit * 20;
 } else if(unit <= 60) {
    total_amount = 600 + (unit-30) * 25;
 } else {
    total_amount = 1350 + (unit-60) * 30;
}
// Display total bill formatted to 2 decimal places
printf("Total Amount:KES %.2f", total_amount);
return 0; // End program successfully
}