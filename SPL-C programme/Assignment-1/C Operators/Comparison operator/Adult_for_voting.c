#include <stdio.h>

int main() {
    // Declare an integer variable 'age' and initialize it to 18
    int age = 18;

    // Check if the person is old enough to vote using the greater than or equal to operator (>=)
    // Since 18 is equal to 18, the condition is true and returns 1
    printf("%d\n", age >= 18); // 1 (true), old enough to vote

    // Check if the person is under age using the less than operator (<)
    // Since 18 is not less than 18, the condition is false and returns 0
    printf("%d\n", age < 18);  // 0 (false)

    return 0; // Signals successful program termination
}