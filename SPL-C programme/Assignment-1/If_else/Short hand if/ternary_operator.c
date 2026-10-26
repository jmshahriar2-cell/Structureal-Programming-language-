#include <stdio.h>

int main() {
    // Declare and initialize integer variable 'a' with the value 10
    int a = 10;
    // Declare and initialize integer variable 'b' with the value 20
    int b = 20;

    int max = (a > b) ? a : b;

    
    printf("The largest number is %d\n", max);

    return 0; // Indicates successful program execution
}