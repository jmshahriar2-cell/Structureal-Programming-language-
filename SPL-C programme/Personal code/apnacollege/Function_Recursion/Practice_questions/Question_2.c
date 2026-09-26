#include<stdio.h>

//function declaration/prototype
void namaste();
void bonjour();

//function call
int main(){
    char ch;
    printf("Enter I if you are Indian or F if you are French: ");
    scanf("%c", &ch);

    if(ch == 'I'){
        printf("Namaste\n");
    }
    else{
        printf("Bonjour.\n");
    }
return 0;    
}

//function definition
void namaste(){
    printf("Namaste.\n");
}
void bjour(){
    printf("Bonjour\n");
}