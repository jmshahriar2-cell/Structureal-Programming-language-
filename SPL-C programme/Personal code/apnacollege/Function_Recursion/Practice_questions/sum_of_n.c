#include<stdio.h>

//function declaration
int sum(int n);

//function call
int main(){
    printf("Sum is: %d", sum(5));
return 0;
}

//function definition
int sum(int n){

    // Base case
    if(n == 1){
        return 1;
    }

    // recursive function
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN; 
}
