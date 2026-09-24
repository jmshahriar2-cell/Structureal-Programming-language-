#include <stdio.h>

int main() {
    int i = 0; // Initialize the counter variable i to 0

    // Execute the while loop as long as i is less than 10[cite: 6]
    while (i < 10) {
        
        // Check if i is equal to 4[cite: 6]
        if (i == 4) {
            // Increment i before the continue statement to prevent an infinite loop[cite: 6]
            i++; 
            // Skip the remaining code in the current iteration and jump to the next loop evaluation[cite: 6]
            continue; 
        }
        
        // Print the value of i for all other iterations[cite: 6]
        printf("%d\n", i);
        
        // Increment i by 1 at the end of the standard loop body[cite: 6]
        i++;
    }
    
    return 0;
}