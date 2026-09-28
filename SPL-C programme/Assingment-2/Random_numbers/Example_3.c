#include <stdio.h>   // Includes standard I/O functions like printf()
#include <stdlib.h>  // Includes general utilities, including rand() and srand()
#include <time.h>    // Includes time functions to access system time via time()

int main() {
    // Seed the random number generator with the current time to ensure different results on each run
    srand(time(NULL));

    // Generate a random integer and use the modulo operator (%) to restrict the result to the range 0 through 9
    int x = rand() % 10; 

    // Output the generated number to the console
    printf("%d\n", x);

    return 0; // Signal that the program executed successfully
}