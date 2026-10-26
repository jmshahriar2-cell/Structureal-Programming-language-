#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'day' with the value 2
    int day = 2;

    // Use a switch statement to evaluate the value of 'day'
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            // This case matches because day equals 2
            printf("Tuesday\n"); // No break here
            // Fall-through: Without 'break', execution continues directly 
            // into the next case below, regardless of its condition
        case 3:
            // Executed due to fall-through, printing "Wednesday"
            printf("Wednesday\n");
            break; // Stops further fall-through
        case 4:
            printf("Thursday\n");
            break;
    }

    return 0; // Indicates successful program execution
}