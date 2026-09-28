#include <stdio.h>   // Standard I/O library for printf()
#include <stdlib.h>  // Standard library for rand() and srand()
#include <time.h>    // Time library to seed the random number generator

int main() {
    // Seed the random number generator with current system time so values differ each run
    srand(time(NULL));

    // Simulate rolling the first dice: rand() % 6 gives 0-5, +1 shifts the range to 1-6
    int dice1 = (rand() % 6) + 1;

    // Simulate rolling the second dice: range 1 to 6
    int dice2 = (rand() % 6) + 1;

    // Print the results of both dice rolls and calculate their sum
    printf("You rolled %d and %d (total = %d)\n", dice1, dice2, dice1 + dice2);

    return 0; // Indicate successful execution
}