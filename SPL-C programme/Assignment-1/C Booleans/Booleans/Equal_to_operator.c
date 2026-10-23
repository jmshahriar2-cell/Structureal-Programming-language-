#include <stdio.h>

int main() {
    // Using the equal to (==) operator to compare different values
    // In C, comparison expressions evaluate to integers: 1 for true, 0 for false.

    printf("%d\n", 10 == 10); // Prints 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Prints 0 (false), because 10 is not equal to 15
    printf("%d", 5 == 55);    // Prints 0 (false), because 5 is not equal to 55

    return 0;
}