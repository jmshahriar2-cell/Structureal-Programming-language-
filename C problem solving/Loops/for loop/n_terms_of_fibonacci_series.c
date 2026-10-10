#include<stdio.h>
int main(){
    int a=0,b=1,c,i,N;
    printf("Enter N: ");
    scanf("%d",&N);
    printf("Fibonacci series: ");
    for(i=1;i<=N;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
return 0;
}