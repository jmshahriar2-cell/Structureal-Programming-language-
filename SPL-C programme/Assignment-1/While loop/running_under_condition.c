#include <stdio.h>

int main() {
    // Declare and initialize the loop control variable 'i' with the value 0
    int i = 0;

    // Use a while loop to execute the code over and over again as long as 'i' is less than 5
    while (i < 5) {
        // Print the current value of 'i' to the console
        printf("%d\n", i);
        
        // Increment 'i' by 1 on each iteration so the condition eventually becomes false
        i++;
    }

    return 0; // Indicates successful program execution
}