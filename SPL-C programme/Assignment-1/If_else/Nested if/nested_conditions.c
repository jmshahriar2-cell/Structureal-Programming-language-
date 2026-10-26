#include <stdio.h>

int main() {
    // Declare and initialize integer variables x and y
    int x = 15;
    int y = 25;

    // First check if x is greater than 10
    if (x > 10) {
        // This runs because 15 is greater than 10, outputting the first message
        printf("x is greater than 10\n");

        // Nested if: If the outer condition is true, we then check if y is greater than 20
        if (y > 20) {
            // This runs because 25 is greater than 20, outputting the second message
            printf("y is also greater than 20\n");
        }
    }

    return 0; // Indicates successful program execution
}