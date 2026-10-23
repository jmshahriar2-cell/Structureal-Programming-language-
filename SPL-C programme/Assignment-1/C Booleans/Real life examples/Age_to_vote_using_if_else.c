#include <stdio.h>

int main() {
    // Declare and initialize variables for personal age and the voting age limit
    int myAge = 25;
    int votingAge = 18;

    // Use an if...else statement to check if the person is old enough to vote
    if (myAge >= votingAge) {
        // Executed if myAge is greater than or equal to 18
        printf("Old enough to vote!");
    } else {
        // Executed if myAge is less than 18
        printf("Not old enough to vote.");
    }

    return 0;
}