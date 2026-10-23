#include <stdio.h>
#include <stdbool.h> // Required header to use boolean types (true/false) in C

int main() {
    // You can also store the result of a comparison in a bool variable
    int x = 10;
    int y = 9; 

    // The expression (x > y) is evaluated, and its result (true/1) is stored in 'isGreater'
    bool isGreater = x > y;

    // Print the stored boolean result as an integer
    printf("%d", isGreater); // Prints 1 (true)

    return 0;
}