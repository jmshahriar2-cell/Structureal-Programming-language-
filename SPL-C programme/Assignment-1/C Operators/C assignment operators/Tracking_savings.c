#include <stdio.h>

int main() {
    // Declare an integer variable 'savings' and initialize it with 100
    int savings = 100;

    // Use the addition assignment operator (+=) to add 50 to savings
    // This is a shorthand way of writing: savings = savings + 50;
    savings += 50; // add 50 to savings

    // Print the updated total savings to the console
    printf("Total savings: %d\n", savings); // Output: Total savings: 150

    return 0; // Signals successful program termination
}