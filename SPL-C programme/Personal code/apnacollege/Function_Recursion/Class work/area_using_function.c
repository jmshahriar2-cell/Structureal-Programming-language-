#include<stdio.h>

//function declaration
float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a,float b);
//function call
int main(){
    float side, rad, a, b;
    
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("The area of the square is: %.2f\n\n", squarearea(side));

    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    printf("The area of the circle is: %f\n", circlearea(rad));

    printf("Enter the length and width of rectangle: ");
    scanf("%f", "%f", &a, &b);
    printf("The area of the rectangle is: %.2f\n", rectanglearea(a, b));


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