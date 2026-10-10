int main(){
    int i=0,n,num,sum = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    printf("Enter %d numbers.",n);

    if(n>0){
        do{
            scanf("%d",&num);
            if(num%2==0){
                sum = sum + num;
            }
            i++;
        }while(i<num);
    }
    printf("Sum of even numbers: %d\n",sum);
return 0;
}