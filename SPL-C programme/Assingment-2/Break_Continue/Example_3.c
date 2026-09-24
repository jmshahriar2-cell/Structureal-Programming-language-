#include <stdio.h>

int main() {
    int i; // Declare the loop counter variable

    // Initiate a for loop that iterates from 0 up to 9
    for (i = 0; i < 10; i++) {
        
        // Check if a specified condition occurs (i equals 4)
        if (i == 4) {
            // The continue statement breaks this single iteration and continues with the next
            // As shown in the example, this skips the value of 4
            continue;
        }
        
        // Print the value of i for all iterations where it was not skipped
        printf("%d\n", i);
    }
    
    return 0;
}