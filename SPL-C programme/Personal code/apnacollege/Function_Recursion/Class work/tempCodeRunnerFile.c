#include<stdio.h>

//function declaration
float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a,float b);
//function call
int main(){
    float squarearea(float side){
        printf("Enter the value of side: ");
        scanf("%f", &side);
        printf("Area of the square is: ", side * side);
    }

    float circlearea(float rad){
        printf("Enter the value of radius: ");
        scanf("%f", &rad);
        printf("Area of the circle is: ", 3.14 * rad *rad);
    }

    float rectanglearea(float a,float b){
        printf("Enter the value of a: ");
        scanf("%f", &a);
        printf("Enter the value of b: ");
        scanf("%f", &b);
    }

return 0;
}
//function definition
float squarearea(float side){
    return side * side;
}
float circlearea(float rad){
    return 3.14 * rad * rad;
}
float rectanglearea(float a,float b){
    return a * b;
}