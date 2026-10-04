#include<stdio.h>

//function declaration
void calculatePrice(float value);

//function call
int main(){
    float a;
    printf("Enter the value: ");
    scanf("%f",&a);
    calculatePrice(a);
    printf("Value is: %f\n",a); // arguement/actual parameter=value present in calling function

return 0;
}

//function definition
void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("Final price is: %f\n",value); //parameter
}