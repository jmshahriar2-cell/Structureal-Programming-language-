#include<stdio.h>
int main(){
    int num,i;
    //Take input from the user
    printf("Enter number: ");
    scanf("%d",&num);

    printf("The multiplication table of %d is:\n",num);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }

    return 0;
}