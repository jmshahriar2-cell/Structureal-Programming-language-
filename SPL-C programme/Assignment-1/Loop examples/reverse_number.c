#include <stdio.h>

int main() {
    // A variable with some specific numbers to be reversed
    int numbers = 12345;

    // A variable to store the reversed number, initialized to 0
    int revNumbers = 0;

    // Reverse and reorder the numbers using a while loop
    // The loop continues as long as 'numbers' evaluates to true (non-zero)
    while (numbers) {
        // Get the last digit of 'numbers' (using numbers % 10) and add it to 'revNumbers'
        // Multiplying 'revNumbers' by 10 shifts existing digits to the left to make room for the new digit
        revNumbers = revNumbers * 10 + numbers % 10;
        
        // Remove the last digit from 'numbers' by performing integer division by 10
        numbers /= 10;
    }

    // Output the final reversed number result
    printf("Reversed number: %d\n", revNumbers);

    return 0; // Indicates successful program execution
}