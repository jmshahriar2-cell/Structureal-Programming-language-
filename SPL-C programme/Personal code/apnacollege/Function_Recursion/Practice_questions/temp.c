#include<stdio.h>

// function declaration
float convertTemp(float cel);

// function call
int main(){
    float far = convertTemp(37);
    printf("far: %f", far);
    return 0;
}

// function definition
float convertTemp(float cel){
    float far = cel * (9.0/5.0) + 32;
    return far;
}