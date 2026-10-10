#include<stdio.h>
int main(){
    int a=0,b=1,c,i=0,N;
    printf("Enter N: ");
    scanf("%d",&N);
    printf("Fibonacci series: ");
    do{
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }while(i<=N);
return 0;
}