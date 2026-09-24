#include <stdio.h>

int main() {
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    
    float avg, sum = 0; // Initialize variables for average and sum
    int i; // Declare loop counter[cite: 18]

    // Get the length of the array[cite: 18]
    int length = sizeof(ages) / sizeof(ages[0]);

    // Loop through the elements of the array[cite: 18]
    for (i = 0; i < length; i++) {
        sum += ages[i]; // Accumulate the total sum[cite: 18]
    }

    // Calculate the average by dividing the sum by the length[cite: 18]
    avg = sum / length;

    // Print the average[cite: 18]
    printf("The average age is: %.2f", avg);
    
    return 0;
}