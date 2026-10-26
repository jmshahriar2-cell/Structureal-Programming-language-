#include <stdio.h>

int main() {
    // Declare and initialize integer variables a, b, and c
    int a = 200;
    int b = 33;
    int c = 500;

    // Use the logical OR (||) operator when at least one of the conditions can be true
    // Condition 1: a > b (200 > 33) is true
    // Condition 2: a > c (200 > 500) is false
    if (a > b || a > c) {
        // This block runs because at least one condition is true
        // Outputs "At least one condition is true"
        printf("At least one condition is true\n");
    }

    return 0; // Indicates successful program execution
}