#include <stdio.h>

int main() {
    // Declare and initialize an array of double-precision floating-point numbers
    double myValues[] = {1.1, 2.2, 3.3};
    
    // Calculate the array length using the sizeof formula[cite: 15]
    // Dividing the total array size by the size of one element works for arrays of any type and any size[cite: 15]
    int length = sizeof(myValues) / sizeof(myValues[0]);
    
    // Output the total count of elements in the array[cite: 15]
    printf("%d", length); // Prints 3[cite: 15]
    
    return 0;
}