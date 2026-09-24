#include <stdio.h>

int main() {
    // Initialize an integer array with four elements
    int myNumbers[] = {25, 50, 75, 100};
    
    // Calculate the number of elements in the array using the sizeof formula[cite: 17]
    // This makes the code more flexible and sustainable as it works for arrays of any size[cite: 17]
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;
    
    // Use the dynamically calculated length variable in the loop condition[cite: 17]
    for (i = 0; i < length; i++) {
        // Print each element of the array[cite: 17]
        printf("%d\n", myNumbers[i]);
    }
    
    return 0;
}