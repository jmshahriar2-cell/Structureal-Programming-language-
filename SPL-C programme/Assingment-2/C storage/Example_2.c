#include <stdio.h> // Standard I/O library for printf()

int main() {
    // The 'auto' keyword is used to explicitly declare local variables
    // Since 'auto' is the default storage class for variables declared inside functions, it is rarely used in practice
    auto int x = 50;  // This is functionally identical to writing just: int x = 50;
    
    // Print the integer value to the console
    printf("%d\n", x);
    
    return 0; // Indicate the program ran successfully
}