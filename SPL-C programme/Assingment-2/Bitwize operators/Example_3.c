#include <stdio.h> // Standard I/O library required for printf()

int main() {
    // The & (bitwise AND) operator compares each bit and returns 1 only if both bits are 1
    int a = 6;  // Binary representation: 0110
    int b = 3;  // Binary representation: 0011

    // Perform the bitwise AND operation:
    // 0110
    // 0011
    // ----
    // 0010 (which equals the decimal value 2)
    int result = a & b;

    // Output the resulting value
    printf("Result: %d\n", result); // Outputs: 2 (0010)

    return 0; // Signal successful execution
}