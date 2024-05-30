#include<stdio.h>

int main(void){
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The value of %d! is: %d",n,fact);
return 0;
}