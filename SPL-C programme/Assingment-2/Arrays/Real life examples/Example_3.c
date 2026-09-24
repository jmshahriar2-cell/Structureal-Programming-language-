#include <stdio.h>

int main() {
    // Initialize an array with a list of numbers
    int myNumbers[] = {3, -1, 7, 0, 9};
    
    // Calculate the total length of the array[cite: 20]
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;

    // Go through the list of numbers[cite: 20]
    for (i = 0; i < length; i++) {
        
        // Check if the current value is negative[cite: 20]
        if (myNumbers[i] < 0) {
            continue; // skip negative numbers[cite: 20]
        }
        
        // Check if the current value is zero[cite: 20]
        if (myNumbers[i] == 0) {
            break; // stop loop when zero is found[cite: 20]
        }
        
        // Print the number if it is positive and non-zero[cite: 20]
        printf("%d\n", myNumbers[i]);
    }
    
    return 0;
}