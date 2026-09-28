#include <stdio.h> // Standard I/O library required for printf()

int main() {
    // The >> (bitwise right shift) operator shifts bits to the right
    // This operation is equivalent to dividing the integer by powers of 2
    // Note: On signed integers, the sign bit may be preserved depending on the system
    int a = 12;  // Binary representation: 00001100

    // Shift the bits of 'a' right by 2 positions:
    // 00001100 becomes 00000011 (Decimal value = 3)
    int result = a >> 2;

    // Output the resulting value to the console:
    // The calculation here is equivalent to: 12 / (2^2) = 3
    printf("Result: %d\n", result); // Outputs: 3

    return 0; // Indicate successful execution
}