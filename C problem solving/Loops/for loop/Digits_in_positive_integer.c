#include<stdio.h>
int main(){
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0){
        count = 1;
    }
    else{
        for(count=0;num>0;count++){
            num = num / 10;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}