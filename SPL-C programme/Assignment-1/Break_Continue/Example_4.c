#include <stdio.h>

int main() {
    int i = 0; // Initialize the counter variable to 0

    // Execute the loop as long as i is less than 10[cite: 3]
    while (i < 10) {
        // Check if i is equal to 4[cite: 3]
        if (i == 4) {
            // The break statement terminates the loop immediately when the condition is met[cite: 3]
            break;
        }
        
        // Print the current value of i[cite: 3]
        printf("%d\n", i);
        
        // Increment i by 1[cite: 3]
        i++;
    }
    
    return 0;
}