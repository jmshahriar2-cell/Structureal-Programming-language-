#include<stdio.h>

//function prototype
void printTable(int n);

//function call
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printTable(n); // (Arguement/actual parameter)=variable present in calling statement
    return 0;
}

//function definition
void printTable(int n){ // (parameter/formal parameter)=variable present in function
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}