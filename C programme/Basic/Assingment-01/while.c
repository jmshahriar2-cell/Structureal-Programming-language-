#include <stdio.h>

int main() {
    // Declare an int variable named i and set it to 1
    int i = 1;

    // Use a while loop to run as long as i is less than or equal to 5
    while (i <= 5) {
        // Print the value of i using %d (integer format specifier)
        printf("%d\n", i);

        //Increase i by 1 in each loop iteration
        i++;
    }

    return 0;
}

