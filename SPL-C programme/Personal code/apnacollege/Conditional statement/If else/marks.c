#include<stdio.h>
int main(){
    int a;
    printf("Enter obtained marks: ");
    scanf("%d",&a);

    if(a>=80 && a<=100){
        printf("A+");
    }
    
    else if(a<80 && a>=70){
        printf("A");
    }
    else if(a<70 && a>=60){
        printf("A-");
    }
    else if(a<60 && a>=50){
        printf("B");
    }
    else if(a<50 && a>=40){
        printf("B-");
    }
    else if(a<40 && a>=30){
        printf("C");
    }
    else{printf("You have failed in the exam.");}
}