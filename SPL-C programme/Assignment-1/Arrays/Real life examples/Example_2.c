#include <stdio.h>

int main() {
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int i; // Declare loop counter variable[cite: 19]

    // Get the length of the array[cite: 19]
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it[cite: 19]
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age[cite: 19]
    for (i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i]; // Update lowestAge if a smaller value is found[cite: 19]
        }
    }

    // Print the result
    printf("The lowest age is: %d\n", lowestAge);

    return 0;
}