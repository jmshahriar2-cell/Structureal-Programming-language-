#include<stdio.h>

//fuction declaration
int sum(int a,int b);

//function call
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("Sum is: %d\n", s);

    return 0;
}

//function definition
int sum(int x, int y){
    return x + y;
}