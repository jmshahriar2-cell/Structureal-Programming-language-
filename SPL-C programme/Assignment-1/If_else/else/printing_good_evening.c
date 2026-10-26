#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'time' with the value 20
    int time = 20;

    // Check if the value of time is less than 18
    if (time < 18) {
        // This block would run if time was less than 18, printing "Good day."
        printf("Good day.\n");
    } else {
        // This block runs because 20 is not less than 18
        // Outputs "Good evening."
        printf("Good evening.\n");
    }

    return 0; // Indicates successful program execution
}