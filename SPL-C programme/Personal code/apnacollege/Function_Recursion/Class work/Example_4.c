#include<stdio.h>

//fuction prototype/declaration
float squarearea(float side);
float rectanglearea(float a,float b);
float circlearea(float rad);

//function call
int main(){
    float a = 5.0;
    float b = 10.0;
    printf("Area is: %f", rectanglearea(a,b));
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