#include <stdio.h>

int main() {
    // Note: When dividing two integers in C, the result will also be an integer 
    // and the fractional part is truncated (discarded).
    int a = 10;
    int b = 3;

    // Integer division: 10 / 3 results in 3 (fractional part .333... is dropped)
    printf("%d\n", a / b); // Output: 3

    // If you want a decimal result, use float or double values (like 10.0 / 3)
    double c = 10.0;
    double d = 3.0;

    // Decimal division: 10.0 / 3.0 results in a precise floating-point number
    printf("%f\n", c / d); // Output: 3.333333

    return 0; // Signals successful program termination
}