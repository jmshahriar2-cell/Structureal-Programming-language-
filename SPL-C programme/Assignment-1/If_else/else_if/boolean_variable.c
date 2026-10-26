#include <stdio.h>
#include <stdbool.h> // Required to use the 'bool' type in C

int main() {
    // Initialize the integer variable 'time' with the value 16
    int time = 16;

    // Store the condition (time < 12) in a boolean variable 'isMorning'
    bool isMorning = time < 12;
    // Store the condition (time < 18) in a boolean variable 'isDay'
    bool isDay = time < 18;

    // Check if the boolean variable 'isMorning' is true
    if (isMorning) {
        // This would run if time was less than 12, printing "Good morning."
        printf("Good morning.\n");
    } 
    // Check if the boolean variable 'isDay' is true
    else if (isDay) {
        // This block runs because 16 is not less than 12 (isMorning is false), 
        // but 16 is less than 18 (isDay is true)
        // Outputs "Good day."
        printf("Good day.\n");
    } 
    // Fallback block if none of the above conditions are true
    else {
        // This would run if time was 18 or greater, printing "Good evening."
        printf("Good evening.\n");
    }

    return 0; // Indicates successful program execution
}