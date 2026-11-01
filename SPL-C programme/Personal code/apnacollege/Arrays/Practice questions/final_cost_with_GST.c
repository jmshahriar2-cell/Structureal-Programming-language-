#include<stdio.h>
int main(){
    int price[3];

    printf("Enter the prices of three items: ");
    scanf("%d %d %d",&price[0],&price[1],&price[2]);

    printf("Total price of the first item: %f\n",price[0]+(0.18*price[0]));
    printf("Total price of the second item: %f\n",price[1]+(0.18*price[1]));
    printf("Total price of the third item: %f\n",price[2]+(0.18*price[2]));

}