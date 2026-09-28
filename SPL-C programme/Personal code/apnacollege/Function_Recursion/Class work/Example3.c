#include<stdio.h>

//function prototype
int sum(int a,int b);
void printTable(int n);

//function call
int main(){
    int n;
    printf("Enter numbet: ");
    scanf("%d",&n);
    printTable(n);//Arguement
    return 0;
}

//function definition
int sum(int x, int y){
    return x+y;
}
void printTable(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}