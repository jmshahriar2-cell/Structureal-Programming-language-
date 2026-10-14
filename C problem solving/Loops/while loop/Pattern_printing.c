#include<stdio.h>
int main(){
    int i,j,height;

    printf("Enter height: ");
    scanf("%d",&height);

    i=1;
    while(i<=height){

        j=1;
        while(j<=i){
            printf("* ");
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}