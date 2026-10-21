#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int x = 10;
    int y = 3;

    // 1. Addition Operator (+)
    // Adds the value of x and y: 10 + 3
    printf("%d\n", x + y); // Output: 13

    // 2. Subtraction Operator (-)
    // Subtracts y from x: 10 - 3
    printf("%d\n", x - y); // Output: 7

    // 3. Multiplication Operator (*)
    // Multiplies x and y: 10 * 3
    printf("%d\n", x * y); // Output: 30

    // 4. Division Operator (/)
    // Performs integer division (discards the fractional part): 10 / 3
    printf("%d\n", x / y); // Output: 3

    // 5. Modulus Operator (%)
    // Returns the remainder of the integer division: 10 % 3
    printf("%d\n", x % y); // Output: 1

    // Declare and initialize a new variable z
    int z = 5;

    // 6. Pre-increment Operator (++)
    // Increases the value of z by 1 before it is used: 5 + 1 = 6
    ++z;
    printf("%d\n", z); // Output: 6

    // 7. Pre-decrement Operator (--)
    // Decreases the value of z by 1 before it is used: 6 - 1 = 5
    --z;
    printf("%d\n", z); // Output: 5

    return 0; // Signals successful program termination
}