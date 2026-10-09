#include<stdio.h>
int main(){
    int n,i = 1;
    printf("Enter your number: ");
    scanf("%d", &n);
    do{
        printf("%d\n",n * i);
        i++;
    }while(i<=10);
return 0;
}