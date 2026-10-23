#include <stdio.h>
#include <stdbool.h> // Required header to use boolean types (true/false) in C

int main() {
    // You are not limited to comparing numbers. You can also compare boolean variables
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Check if both have the same value (both true, or both false)
    // In C, comparison expressions evaluate to integers: 1 for true, 0 for false.
    printf("%d", isHamburgerTasty == isPizzaTasty);

    return 0;
}