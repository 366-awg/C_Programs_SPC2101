/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 06/11/2025
Description: A C program that reads daily sales amounts from a file and displays the total sales for the day.*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, totalSales = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and sum all transactions
    while (fscanf(file, "%f", &amount) != EOF) {
        totalSales += amount;
    }

    // Display total sales
    printf("Total Sales for the Day: $%.2f\n", totalSales);

    // Close the file
    fclose(file);

    return 0;
}
