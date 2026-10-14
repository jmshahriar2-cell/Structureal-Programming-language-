#include<stdio.h>
int main(){
    int i,j,height;

    printf("Enter height: ");
    scanf("%d",&height);

    i=1;
    do{

        j=1;
        do{
            printf("* ");
            j++;
        }while(j<=i);
        printf("\n");

        i++;
    }while(i<=height);

    return 0;
}