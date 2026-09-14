#include <stdio.h>

int main() {
    /* Menu: 
       1 - Coffee
       2 - Tea
       3 - Water 
    */
    
    //Change 'choice' to the correct number for Coffee (which is 1)
    int choice = 1;

    //Insert 'choice' inside switch()
    switch(choice) {
        
        //Replace each case: with the correct number based on the menu above
        case 1:
            printf("Coffee\n");
            break;
            
        case 2:
            printf("Tea\n");
            break;
            
        case 3:
            printf("Water\n");
            break;
            
        //Move printf("Invalid choice\n") into a default: case
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

