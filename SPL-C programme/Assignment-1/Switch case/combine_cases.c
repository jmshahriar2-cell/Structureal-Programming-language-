#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'day' with the value 6
    int day = 6;

    // Use a switch statement to evaluate the value of 'day'
    switch (day) {
        case 6:
        case 7:
            // When several values should run the same code, you can write the cases 
            // right after each other and let them share a single code block
            // Since day is 6, it matches case 6 (falling through to share this block) 
            // and outputs "Weekend"
            printf("Weekend\n");
            break; // Exits the switch block
        default:
            // Specifies code to run if there is no match with case 6 or 7 (e.g. days 1-5)
            printf("Weekday\n");
    }

    return 0; // Indicates successful program execution
}