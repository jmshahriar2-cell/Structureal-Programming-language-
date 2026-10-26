#include <stdio.h>

int main() {
    // Declare and initialize integer variables a, b, and c
    int a = 200;
    int b = 33;
    int c = 500;

    // Use the logical AND (&&) operator to check if BOTH conditions are true
    // Condition 1: a > b (200 > 33) is true
    // Condition 2: c > a (500 > 200) is true
    if (a > b && c > a) {
        // This block runs because both conditions are true
        // Outputs "Both conditions are true"
        printf("Both conditions are true\n");
    }

    return 0; // Indicates successful program execution
}