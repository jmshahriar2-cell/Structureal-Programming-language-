#include <stdio.h>

int main() {
    // Declare and initialize an array of integers
    int myNumbers[] = {10, 25, 50, 75, 100};
    
    // To find out how many elements an array has, divide the total size[cite: 14]
    // of the array by the size of one element (myNumbers[0])[cite: 14]
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    
    // Print the calculated length of the array[cite: 14]
    printf("%d", length); // Prints 5[cite: 14]
    
    return 0;
}