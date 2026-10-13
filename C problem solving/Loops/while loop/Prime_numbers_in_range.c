#include <stdio.h>

int main() {
    int A, B, i, j, isPrime;

    // Input the range
    printf("Enter range (A B): ");
    scanf("%d %d", &A, &B);

    printf("Prime numbers: ");

    i = A;
    // Outer while loop to iterate through each number in the range from A to B
    while (i <= B) {
        // Numbers less than or equal to 1 are not prime
        if (i <= 1) {
            i++;
            continue;
        }

        isPrime = 1; // Assume the current number is prime
        j = 2;

        // Inner while loop to check for factors up to the square root of i
        while (j * j <= i) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
            j++;
        }

        // If isPrime remains 1, it is a prime number
        if (isPrime == 1) {
            printf("%d ", i);
        }

        i++;
    }

    printf("\n");
    return 0;
}