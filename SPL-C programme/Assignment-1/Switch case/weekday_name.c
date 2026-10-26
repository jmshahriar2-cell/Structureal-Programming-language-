#include <stdio.h>

int main() {
    // Declare and initialize the integer variable 'day' with the value 4
    int day = 4;

    // Use a switch statement to evaluate the value of 'day' and match it with corresponding cases
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            // This block runs because day equals 4
            // Outputs "Thursday"
            printf("Thursday\n");
            break; // Exits the switch block
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            // Optional: Handles values outside of 1-7
            break;
    }

    return 0; // Indicates successful program execution
}