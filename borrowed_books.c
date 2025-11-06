/*Name: Ann Wangari Githinji
Reg No: CT101/G/26510/25
Date: 06/11/2025
Description: A C program that appends book titles to a file with confirmation.*/

#include <stdio.h>

int main() {
    char title[100];
    FILE *file;
    
    // Open file in append mode
    file = fopen("borrowed_books.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    // Get book title from user
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    
    // Write title to file
    fprintf(file, "%s", title);
    
    // Close file
    fclose(file);
    
    // Display confirmation
    printf("Book title successfully stored in borrowed_books.txt\n");
    
    return 0;
}