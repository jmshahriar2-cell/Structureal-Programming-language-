#include <stdio.h>

int main() {
    // Declare an integer variable 'number' to store the user's input
    int number;

    // Use a do/while loop to ensure the code block runs at least once before checking the condition
    do {
        // Prompt the user to enter a positive number
        printf("Enter a positive number: ");
        
        // Read the integer input from the user and store it in the 'number' variable
        scanf("%d", &number);
    } 
    // The loop keeps running as long as the number is positive (number > 0)
    // The loop stops automatically when the user enters 0 or a negative number
    while (number > 0);

    return 0; // Indicates successful program execution
}