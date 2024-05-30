#include<stdio.h>

int power(int m,int n);

int main(void){
    int m,n;
    printf("Enter number >0: ");
    scanf("%d",&m);
    printf("Enter the power: ");
    scanf("%d",&n);
    printf("The value is: %d",power(m,n));
return 0;
}

int power(int m,int n){
    if(n==0)
        return 1;
    else
        return power(m,n-1)*m;
}