#include <stdio.h>

int main() {
    // Let's use booleans in a real-life example where we want to find out if a person is old enough to vote.
    // We use the >= comparison operator to find out if myAge (25) is greater than OR equal to votingAge (18).
    int myAge = 25;
    int votingAge = 18;

    // Print the result of the comparison as an integer (1 for true, 0 for false)
    printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!

    return 0;
}