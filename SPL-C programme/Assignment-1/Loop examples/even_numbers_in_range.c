#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'i' with the value 0
    int i = 0;

    // Use a while loop to run as long as 'i' is less than or equal to 10 (inclusive)
    while (i <= 10) {
        // Print the current value of 'i' to the console
        printf("%d\n", i);
        
        // Increment 'i' by 2 on each iteration (i += 2) to skip odd numbers 
        // and target only even numbers (0, 2, 4, 6, 8, 10)
        i += 2;
    }

    return 0; // Indicates successful program execution
}