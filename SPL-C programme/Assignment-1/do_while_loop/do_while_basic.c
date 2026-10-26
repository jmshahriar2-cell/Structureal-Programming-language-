#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'i' with the value 0
    int i = 0;

    // Use a do/while loop: The loop will always be executed at least once, 
    // even if the condition is false, because the code block is executed before the condition is tested
    do {
        // Print the current value of 'i' to the console
        printf("%d\n", i);
        
        // Increment 'i' by 1 on each iteration
        i++;
    } 
    // The condition (i < 5) is evaluated after the code block runs
    while (i < 5);

    return 0; // Indicates successful program execution
}