#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'day' with the value 4
    int day = 4;

    // Use a switch statement to evaluate the value of 'day'
    switch (day) {
        case 6:
            printf("Today is Saturday\n");
            break;
        case 7:
            printf("Today is Sunday\n");
            break;
        default:
            // The default keyword specifies some code to run if there is no case match
            // Since day is 4, it doesn't match case 6 or 7, so this default block runs
            // Outputs "Looking forward to the Weekend"
            printf("Looking forward to the Weekend\n");
    }

    return 0; // Indicates successful program execution
}