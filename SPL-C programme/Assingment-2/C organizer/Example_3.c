#include <stdio.h>   // Includes the standard I/O library needed for the printf() function
#include "calc.h"    // Includes the custom header file to access the add() and subtract() functions

int main() {
    // Calls the add() function with arguments 5 and 5, then prints the integer result
    printf("5 + 5 = %d\n", add(5, 5));
    
    // Calls the subtract() function with arguments 6 and 4, then prints the integer result
    printf("6 - 4 = %d\n", subtract(6, 4));
    
    return 0; // Exits the program successfully
}