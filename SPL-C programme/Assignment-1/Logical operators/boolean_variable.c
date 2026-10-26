#include <stdio.h>
#include <stdbool.h> // Required to use the 'bool' type in C

int main() {
    // Declare and initialize boolean variables for login and admin status
    bool isLoggedIn = true;
    bool isAdmin = false;
    
    // Declare and initialize security level where 1 represents the highest security tier
    int securityLevel = 3; // 1 = highest

    // Check if the user is logged in AND (either they are an admin OR their security level is <= 2)
    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        // This block would run if the entire condition evaluates to true
        printf("Access granted\n");
    } else {
        // This block runs because securityLevel is 3 (which is not <= 2) and isAdmin is false
        // Outputs "Access denied"
        printf("Access denied\n");
    }

    return 0; // Indicates successful program execution
}