#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'time' with the value 16
    int time = 16;

    // Check if the value of time is less than 12 (Morning condition)
    if (time < 12) {
        // This block would run if time < 12, printing "Good morning."
        printf("Good morning.\n");
    } 
    // Check if the value of time is less than 18 (Day condition)
    else if (time < 18) {
        // This block runs because 16 is not less than 12, but it is less than 18
        // Outputs "Good day."
        printf("Good day.\n");
    } 
    // Fallback block if none of the above conditions are true (Evening condition)
    else {
        // This block would run if time was 18 or greater, printing "Good evening."
        printf("Good evening.\n");
    }

    return 0; // Indicates successful program execution
}