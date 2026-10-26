#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'i' with the value 10
    int i = 10;

    // Condition is False from the Start:
    // Even if the condition is false from the start, the code block will still execute one time
    // This is because a do/while loop executes its block before testing the condition
    do {
        // Print the current value of 'i' (which is 10)
        printf("i is %d\n", i);
        
        // Increment 'i' by 1 (i becomes 11)
        i++;
    } 
    // The condition (11 < 5) is tested here and evaluates to false, terminating the loop
    while (i < 5);

    return 0; // Indicates successful program execution
}