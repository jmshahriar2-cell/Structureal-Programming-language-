#include <stdio.h>

int main() {
    // Declare an integer variable 'passwordLength' and initialize it to 5
    int passwordLength = 5;

    // Check if the password length is greater than or equal to 8
    // Since 5 is not >= 8, the condition is false, returning 0
    printf("%d\n", passwordLength >= 8); // 0 (false), too short

    // Check if the password length is less than 8
    // Since 5 is < 8, the condition is true, returning 1
    printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters

    return 0; // Signals successful program termination
}