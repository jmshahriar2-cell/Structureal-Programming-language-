#include <stdio.h>   // Include standard I/O library for printf()
#include <stdlib.h>  // Include standard library for rand() and srand()
#include <time.h>    // Include time library to access system time()

int main() {
    // Seed the random number generator using the current time 
    // This ensures a different sequence of random numbers on each program run
    srand(time(NULL));

    // Generate and print three random integers
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0; // Indicate successful execution
}