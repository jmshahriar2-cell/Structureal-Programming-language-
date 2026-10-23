#include <stdio.h>
#include <stdbool.h> // Required header to use boolean types (true/false) in C

int main() {
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Print boolean values
    // In C, booleans are represented as integers: 1 for true, 0 for false.
    // Therefore, the %d format specifier is used.
    
    printf("%d\n", isProgrammingFun); // Prints 1 (true)
    printf("%d\n", isFishTasty);      // Prints 0 (false)

    return 0;
}