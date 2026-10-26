#include <stdio.h>
#include <stdbool.h> // Required to use the 'bool' type in C

int main() {
    // Declare and initialize the integer variable 'time' with the value 20
    int time = 20;

    // Store the condition (time < 18) in a boolean variable named 'isDay'
    bool isDay = time < 18;

    // Check if the boolean variable 'isDay' is true
    if (isDay) {
        // This block would run if isDay was true, printing "Good day."
        printf("Good day.\n");
    } else {
        // This block runs because 'isDay' evaluates to false (20 is not less than 18)
        // Outputs "Good evening."
        printf("Good evening.\n");
    }

    return 0; // Indicates successful program execution
}