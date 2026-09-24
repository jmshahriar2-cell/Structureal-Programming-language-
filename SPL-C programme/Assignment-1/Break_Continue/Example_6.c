#include <stdio.h>

int main() {
    // Initialize an array of integers with positive, negative, and zero values
    int myNumbers[] = {3, -1, 7, 0, 9};
    
    // Calculate the length of the array to determine the number of loop iterations[cite: 7]
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;

    // Loop through each element in the array[cite: 7]
    for (i = 0; i < length; i++) {
        
        // Check if the current number is negative[cite: 7]
        if (myNumbers[i] < 0) {
            continue; // skip negative numbers and proceed to the next iteration[cite: 7]
        }
        
        // Check if the current number is exactly zero[cite: 7]
        if (myNumbers[i] == 0) {
            break; // stop loop completely when zero is found[cite: 7]
        }
        
        // Print the number if it is neither skipped (negative) nor causes a break (zero)[cite: 7]
        printf("%d\n", myNumbers[i]);
    }
    
    return 0;
}