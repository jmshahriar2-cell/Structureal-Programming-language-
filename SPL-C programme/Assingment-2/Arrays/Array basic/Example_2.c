#include <stdio.h>

int main() {
    // Initialize an array named myNumbers with the initial values
    int myNumbers[] = {25, 50, 75, 100};
    
    // To change the value of a specific element, refer to its index number[cite: 10]
    // Here, we reassign the first element (index 0) to 33[cite: 10]
    myNumbers[0] = 33;
    
    // Print the newly assigned value of the first element[cite: 10]
    printf("%d", myNumbers[0]);
    
    // As noted in the example, this now outputs 33 instead of 25[cite: 10]
    return 0;
}