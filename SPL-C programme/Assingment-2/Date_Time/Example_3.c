#include <stdio.h>
#include <time.h>

int main() {
    // Get the current system time
    time_t now = time(NULL); 
    
    // Convert the raw time_t value into a local time structure (struct tm)
    struct tm *t = localtime(&now); 
    
    // Declare a character array buffer to hold the formatted string
    char buffer[100]; 
    
    // Use strftime() to format the date and time as a string in the specific format "DD-MM-YYYY HH:MM:SS"
    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", t); 
    
    // Print the resulting formatted time string
    printf("Formatted time: %s\n", buffer); 
    
    return 0; 
}