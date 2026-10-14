#include<stdio.h>
int main(){
    int num,rem,rev=0;

    printf("Enter number: ");
    scanf("%d",&num);

    for(;num!=0;num=num/10){
        rem=num%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;
}