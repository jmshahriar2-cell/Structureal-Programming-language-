#include <stdio.h>

int main() {
    int i; 

    // The loop initializes i at 0 and runs as long as i is less than 10
    for (i = 0; i < 10; i++) {
        
        // Check if the current value of i is exactly 4
        if (i == 4) {
            // When i equals 4, the break statement triggers and stops the loop entirely
            break;
        }
        
        // If the loop hasn't been broken, print the current value of i
        printf("%d\n", i);
    }

    return 0;
}

