#include <stdio.h>
#include <stdbool.h> // Required to use the 'bool' type in C

int main() {
    // Declare and initialize integer variable 'age' with the value 20
    int age = 20;
    // Declare and initialize boolean variable 'isCitizen' with the value true
    bool isCitizen = true;

    // Check if the person's age is 18 or older
    if (age >= 18) {
        // This runs because 20 >= 18 is true, printing that they are old enough
        printf("Old enough to vote.\n");

        // Nested if...else: Test a secondary condition that depends on the outer condition
        if (isCitizen) {
            // This runs because isCitizen is true, confirming they can vote
            printf("And you are a citizen, so you can vote!\n");
        } else {
            // This would run if age >= 18 was true, but isCitizen was false
            printf("But you must be a citizen to vote.\n");
        }
    } else {
        // This would run if age < 18 (not applicable since age is 20)
        printf("Not old enough to vote.\n");
    }

    return 0; // Indicates successful program execution
}