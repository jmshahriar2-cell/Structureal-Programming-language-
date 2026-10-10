#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter 2 numbers: ");
    scanf("%d,%d,",&a,&b);
    c = a + b;
    avg = c / 2;
    printf("The average is: %f",avg);
    return 0;
}