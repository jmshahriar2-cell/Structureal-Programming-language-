#include <stdio.h>

int main() {
    // Initialize an array of integers named myNumbers
    int myNumbers[] = {10, 25, 50, 75, 100};
    
    // To get the size of an array, use the sizeof operator
    // The %zu format specifier is used for size_t values returned by sizeof
    printf("%zu", sizeof(myNumbers)); // Prints 20[cite: 13]
    
    return 0;
}