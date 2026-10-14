#include <stdio.h>

int main() {
    int height, i, j;

    // Prompt the user to enter the height of the triangle
    printf("Enter height: ");
    scanf("%d", &height);

    // Outer loop for the number of rows
    for (i = 1; i <= height; i++) {
        // Inner loop to print asterisks in each row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row is printed
        printf("\n");
    
    }

    return 0;
}