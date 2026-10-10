#include<stdio.h>
int main(){
    int n,i = 1;
    printf("Enter your number: ");
    scanf("%d", &n);

    //while(condition){
    //     do something
    // }
    
    while(i<=10){
        printf("%d\n",n * i);
        i++;      
    }
return 0;
}