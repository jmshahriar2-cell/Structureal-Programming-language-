// Start by creating a header file named calc.h to declare the functions

// Include guard checks if CALC_H is not defined to prevent multiple inclusions
#ifndef CALC_H
// Define CALC_H so subsequent inclusions are skipped
#define CALC_H

// Function declaration for an addition operation taking two integers
int add(int x, int y);

// Function declaration for a subtraction operation taking two integers
int subtract(int x, int y);

// End of the include guard
#endif