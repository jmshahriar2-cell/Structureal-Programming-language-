#include <stdio.h>

int main() {
    /* 
     * The following code demonstrates the example from "Screenshot 2026-09-24 110108.png".
     * It is important to note that all elements in an array must be of the same data type[cite: 12]. 
     * This means you cannot mix different types of values, like integers and floating point numbers, in the same array[cite: 12].
     */
     
    // Attempting to initialize an integer array with mixed data types (integers and floats)[cite: 12]:
    int myArray[] = {25, 50, 75, 3.15, 5.99};
    
    /*
     * Because the array is strictly of type 'int', the C compiler will implicitly 
     * truncate the floating-point values (3.15 and 5.99) into integers (3 and 5) 
     * and likely throw a warning, confirming that true mixing of types is not permitted.
     */
     
    return 0;
}