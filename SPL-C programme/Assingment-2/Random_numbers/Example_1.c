#include <stdio.h>   // Standard input/output library for printf()
#include <stdlib.h>  // Standard library containing utility functions, including rand()

int main() {
    // Generate a random integer using rand() and assign it to 'r'
    int r = rand();

    // Print the generated random number followed by a newline
    printf("%d\n", r);

    return 0;
}