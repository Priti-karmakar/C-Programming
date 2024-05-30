#include<stdio.h>

double series(int n);

int main(void){
    int n;
    printf("The value of teh series is: \n");
    printf("y=1+1/2+1/3+...+1/n\n");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The sum is: %lf",series(n));
return 0;
}

double series(int n){
    double i,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+(1/i);
    }
    return sum;
}