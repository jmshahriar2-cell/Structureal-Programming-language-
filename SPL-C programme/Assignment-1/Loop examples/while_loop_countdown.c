#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'countdown' with the value 3
    int countdown = 3;

    // Use a while loop to run a practical countdown as long as 'countdown' is greater than 0
    while (countdown > 0) {
        // Print the current value of 'countdown' to the console
        printf("%d\n", countdown);
        
        // Decrement 'countdown' by 1 on each iteration so the condition eventually becomes false
        countdown--;
    }

    // Once the loop terminates (when countdown reaches 0), print "Happy New Year!!" at the end
    printf("Happy New Year!!\n");

    return 0; // Indicates successful program execution
}