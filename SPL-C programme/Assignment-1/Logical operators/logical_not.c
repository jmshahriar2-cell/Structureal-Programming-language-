#include <stdio.h>

int main() {
    // Declare and initialize integer variables a and b
    int a = 33;
    int b = 200;

    // Use the logical NOT (!) operator to check if something is NOT the case by reversing a condition
    // The inner comparison (a > b) is 33 > 200, which is false
    // The NOT operator (!) reverses this false condition to true
    if (!(a > b)) {
        // This block runs because the reversed condition evaluates to true
        // Outputs "a is NOT greater than b"
        printf("a is NOT greater than b\n");
    }

    return 0; // Indicates successful program execution
}