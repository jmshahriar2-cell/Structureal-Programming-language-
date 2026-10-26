#include <stdio.h>
#include <stdbool.h> // Required to use the 'bool' type in C

int main() {
    // Declare and initialize integer variables x and y
    int x = 20;
    int y = 18;

    // Store the result of the comparison (x > y) in a boolean variable
    bool isGreater = x > y;

    // Check if the boolean variable is true
    if (isGreater) {
        // This block runs because isGreater evaluates to true
        printf("x is greater than y\n");
    }

    return 0; // Indicates successful program execution
}