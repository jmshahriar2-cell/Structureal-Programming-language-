#include<stdio.h>

// function declaration
int fact(int n);

// function call
int main(){
    printf("Factorial is: %d",fact(5));
    return 0;
}

// function definition
int fact(int n){
    
    // Base case
    if(n == 0){
        return 1;
    }

    // recursive function
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}