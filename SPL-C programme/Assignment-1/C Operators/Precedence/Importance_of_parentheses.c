#include <stdio.h>

int main() {
    // According to operator precedence, multiplication happens before addition.
    // Therefore, 3 * 4 is calculated first (12), and then 2 is added (2 + 12 = 14)
    int result1 = 2 + 3 * 4; // 2 + 12 = 14

    // Parentheses override standard precedence, so the addition inside (2 + 3) is calculated first (5),
    // and then multiplied by 4 (5 * 4 = 20)
    int result2 = (2 + 3) * 4; // 5 * 4 = 20

    // Print the evaluated results to the console
    printf("%d\n", result1); // Output: 14
    printf("%d\n", result2); // Output: 20

    return 0; // Signals successful program termination
}