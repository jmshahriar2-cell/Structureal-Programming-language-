#include <stdio.h>

int main() {
    int a, b, i, j, is_prime;

    // Input range A and B
    printf("Enter range (A B): ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers: ");

    // Outer loop to iterate from a to b (inclusive)
    for (i = a; i <= b; i++) {
        // Numbers less than 2 are not prime
        if (i < 2) {
            continue;
        }

        is_prime = 1; // Assume the current number is prime

        // Inner loop to check if i is divisible by any number from 2 up to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // Found a divisor, so it's not prime
                break;
            }
        }

        // If it's still marked as prime, print it
        if (is_prime) {
            printf("%d ", i);
        }
    }
    
    return 0;
}