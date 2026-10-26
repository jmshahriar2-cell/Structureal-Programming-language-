#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'i' with the value 10
    int i = 10;

    // While Loop With False Condition: 
    // If the condition is false at the beginning, the code inside the loop will never run
    // Here, 10 < 5 evaluates to false immediately
    while (i < 5) {
        // This block is bypassed entirely and nothing is printed
        printf("This will never be printed\n");
        i++;
    }
    printf("Your condition is false.");

    return 0; // Indicates successful program execution
}