/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 30/10/2025
Description: A C program that calculates and displays the total number of occupied rooms across three hotel branches using a 3D array.*/
#include <stdio.h> //Including standard input-output header file
//Main Function
int main() {
    int i, j, k; //Loop counters
    int occupied = 0; //Variable to count total occupied rooms
    int chain[3][5][10] = { //3D Array to store room occupancy for 3 hotel branches, each with 5 floors and 10 rooms
        {
            {1,1,0,1,1,1,0,0,1,0},
            {1,1,1,0,0,1,0,0,1,0},
            {0,0,1,0,1,1,1,0,1,0},
            {1,1,0,0,0,0,1,1,1,1},
            {0,0,0,1,1,0,1,1,1,0}
        },
        {
            {1,1,1,0,0,0,1,0,0,1},
            {1,0,0,0,0,1,1,1,0,1},
            {1,1,1,0,0,0,0,1,1,0},
            {0,0,0,0,1,1,1,0,1,1},
            {1,1,1,0,0,0,0,1,0,0}
        },
        {
            {1,1,1,1,1,1,1,0,0,0},
            {0,0,0,0,0,1,0,1,1,1},
            {0,0,1,1,1,1,0,0,1,0},
            {1,0,0,1,0,0,1,1,1,1},
            {0,0,1,1,1,1,0,0,1,0}
        }
    };
    //Loop to count total occupied rooms across all branches
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                if (chain[i][j][k] == 1) {
                    occupied++;
                }
            }
        }
    }
    //Displaying the total number of occupied rooms
    printf("The total number of occupied rooms: %d\n", occupied);
    
    return 0; // End program successfully
}
