/* 
Name: Kelvin Maina Mucheru
Reg No: CT101/G/26445/25
Description: Program to record borrowed book titles into a text file without deleting existing records.
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); // Open in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin); // Read book title

    fprintf(file, "%s", title); // Write to file
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}