#include<stdio.h>

int factorial(int n);
int nck(int n,int k);

int  main(void){
    int n,i,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The value of %d! is: %d",n,factorial(n));
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    printf("The value of %dc%d is: %d",n,k,nck(n,k));
    return 0;
}

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact*=i;
    return fact;
}

int nck(int n,int k){
    if(k==0||k==n)
        return 1;
    return nck(n-1,k-1)+nck(n-1,k);
}