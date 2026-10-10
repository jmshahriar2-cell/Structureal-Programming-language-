#include<stdio.h>
int main(){
    int i,n,num,sum = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    printf("Enter %d numbers.",n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num%2==0){
            sum = sum + num;
        }
    }
    printf("Sum of even numbers: %d\n",sum);
return 0;
}