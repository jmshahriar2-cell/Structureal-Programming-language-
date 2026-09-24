#include <stdio.h>

int main() {
    // Initialize an array with four integer elements
    int myNumbers[] = {25, 50, 75, 100};
    int i; // Declare the loop counter variable[cite: 16]

    // Use a for loop to iterate through the array elements by specifying the hardcoded size (i < 4)[cite: 16]
    // Note: This works for arrays of a specified size, though calculating length dynamically is preferred[cite: 16]
    for (i = 0; i < 4; i++) {
        // Print each element in the array followed by a newline[cite: 16]
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}