#include<stdio.h>

int main(void){
    int y,x,n;
    printf("Enter the value of x and n: ");
    scanf("%d %d",&x,&n);
    if(n==1){
        y=1+(x*x);
        printf("The value of y is: %d",y);
    }
    else if(n==2){
        y=1+(x/n);
        printf("The value of y is: %d",y);
    }
    else if(n==3){
        y=1+(2*x);
        printf("The value of y is: %d",y);
    }
    else if(n>3||n<1){
        y=1+(n*x);
        printf("The value of y is: %d",y);
    }
return 0;
}