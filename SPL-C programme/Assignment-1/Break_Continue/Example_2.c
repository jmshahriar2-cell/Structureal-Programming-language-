#include <stdio.h>

int main() {
    int i; // Declare the loop counter variable

    // Initiate a for loop that iterates from 0 up to 9
    for (i = 0; i < 10; i++) {
        
        // Check if a specified condition occurs (i equals 4)
        if (i == 4) {
            // The continue statement breaks one iteration and continues with the next[cite: 1]
            // As shown in the example, this skips the value of 4[cite: 1]
            continue;
        }
        
        // Print the value of i for all iterations where i is not 4
        printf("%d\n", i);
    }
    
    return 0;
}