#include <stdio.h>

int main() {
    // 1. Declare an int named studentID and assign it a value
    int studentID = 10042;

    // 2. Declare a float named score and assign it a value (with decimals)
    float score = 92.5;

    // 3. Declare a char named grade and assign it a single letter
    char grade = 'A';

    // 4. Print all three values using printf with correct format specifiers
    // %d is for int, %f is for float, and %c is for char
    printf("Student ID: %d\n", studentID);
    printf("Score: %.1f\n", score);
    printf("Grade: %c\n", grade);

    return 0;
}

