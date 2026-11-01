#include<stdio.h>
int main(){
    int marks[3];


    printf("Enter marks in physics: ");
    scanf("%d",&marks[0]);

    printf("Enter marks in Math: ");
    scanf("%d",&marks[1]);

    printf("Enter marks in Chemistry: ");
    scanf("%d",&marks[2]);


    printf("Physics=%d,Maths=%d,Chemistry=%d",marks[0],marks[1],marks[2]);

    return 0;
}
