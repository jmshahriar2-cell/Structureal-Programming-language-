#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Using a for loop to reverse the number
    for (reversed = 0; n != 0; n /= 10) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}

