#include <stdio.h> // Required for printf()

int main() {
    // The register keyword suggests that the variable should be stored in a CPU register for faster access
    // Note: This keyword is mostly obsolete because modern compilers automatically choose the best variables to keep in registers
    // Also, you cannot take the address of a register variable using the '&' operator
    register int counter = 0;

    // Print the value of the counter
    printf("Counter: %d\n", counter);

    return 0;
}