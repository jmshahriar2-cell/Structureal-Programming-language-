#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'dice' with the starting value 1
    int dice = 1;

    // Use a while loop combined with an if...else statement to simulate a game of Yatzy
    // The loop runs continuously as long as 'dice' is less than or equal to 6
    while (dice <= 6) {
        // Check if the current dice number is less than 6
        if (dice < 6) {
            // If true, print "No Yatzy"
            printf("No Yatzy\n");
        } else {
            // If false (meaning dice equals 6), print "Yatzy!"
            printf("Yatzy!\n");
        }
        
        // Increment the dice value by 1 to progress through the loop iterations
        dice = dice + 1;
    }

    return 0; // Indicates successful program execution
}