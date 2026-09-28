#include <stdio.h> // Standard I/O library for printf()

// Macros can take parameters, similar to a function
// Define a macro named SQUARE that takes a parameter 'x' and multiplies it by itself
#define SQUARE(x) ((x) * (x))

int main() {
    // Call the SQUARE macro with the value 4 and print the calculated result
    printf("Square of 4: %d\n", SQUARE(4));
    
    return 0;
}