/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 24/09/2025
Description: A C program that calculates and displays volume and surface area of a cylinder based on user-input, radius and height.*/
#include <stdio.h>

#define PI 3.14159 // Define constant value of PI

int main() {
    float radius, height;  // Declare variables to store radius and height
    float volume, surface_area;  // Declare variables to store calculated results
    
    printf("Enter the radius of the cylinder: ");  // Prompt user for radius input
    scanf("%f", &radius);  // Read radius value from user and store in variable
    
   printf("Enter the height of the cylinder: ");  // Prompt user for height input
   scanf("%f", &height);  // Read height value from user and store in variable
    
    volume = PI * radius * radius * height;  // Calculate volume using formula 
    surface_area = 2 * PI * radius * (radius + height);  // Calculate surface area using formula 
    
    printf("\nVolume of the cylinder: %.2f\n", volume);  // Display calculated volume with 2 decimal places
    printf("Surface area of the cylinder: %.2f\n", surface_area);  // Display calculated surface area with 2 decimal places
    
    return 0;  
}