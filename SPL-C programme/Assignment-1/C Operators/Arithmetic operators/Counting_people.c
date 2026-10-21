#include <stdio.h>

int main() {
    // Declare and initialize an integer variable x with the value 5
    int x = 5;

    // Pre-increment operator: Increases the value of x by 1 (x becomes 6)
    ++x; //

    // Pre-decrement operator: Decreases the value of x by 1 (x becomes 5 again)
    --x; 

    // Print the final value of x
    // If you increase a value and later decrease it, it goes up by one and 
    // then back down by one, ending up where it started (5)
    printf("%d\n", x); // Output: 5

    return 0; // Signals successful program termination
}