#include <stdio.h> // Required for printf()

int main() {
    // The auto keyword is used for local variables
    // Because it is the default behavior for variables declared inside functions, it is rarely used explicitly
    auto int x = 50;  // Same as just: int x = 50;
    
    // Print the value of the local variable
    printf("%d\n", x);
    
    return 0;
}