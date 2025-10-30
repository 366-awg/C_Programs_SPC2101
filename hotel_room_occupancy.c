/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 30/10/2025
Description: A C program that records room occupancy for five hotel floors and reports the number of occupied and vacant rooms per floor.*/

#include <stdio.h> //Including standard input-output header file
//Main Function
int main () {
    int i; //Loop counter
    int j; //Loop counter
    int occupied; //Variable to count occupied rooms
    int vacant; //Variable to count vacant rooms
    int occupancy[5][10]; //2D Array to store room occupancy for 5 floors and 10 rooms each
    
    printf("Enter 1 or 0, where 1=occupied and 0=vacant"); //Prompting user to enter room occupancy
    for (i=0; i<5; i++) { //Loop to read occupancy for 5 floors
        for (j=0; j<10; j++) { //Loop to read occupancy for 10 rooms per floor
            printf("\nFloor [%d]", i + 1); //Displaying floor number
            printf("Room [%d]: ", j + 1); //Displaying room number
            scanf("%d", &occupancy[i][j]); //Reading user input for room occupancy
            //Input validation to ensure only 1 or 0 is entered
            while (occupancy[i][j] != 1 && occupancy[i][j] != 0) { 
                printf("Invalid input! Please enter 1 or 0: "); 
                scanf("%d", &occupancy[i][j]); //Reading user input again
            }
        }
    }
    for (i=0; i<5; i++) { //Loop to calculate and display occupied and vacant rooms per floor
      occupied = 0; //Reset occupied count for each floor
      vacant = 0; { //Reset vacant count for each floor
        //Loop to count occupied and vacant rooms
         for (j=0; j<10; j++) { 
             if (occupancy[i][j] == 1) { 
                 occupied = occupied + 1;
             }
             else {
                 vacant = vacant + 1;
             }
         }
      }
      printf("\nFloor %d", i + 1); //Displaying floor number
      printf("\nOccupied Rooms: %d\t", occupied); //Displaying number of occupied rooms
      printf("Vacant Rooms: %d", vacant); //Displaying number of vacant rooms
    } 
return 0; //End program successfully
}