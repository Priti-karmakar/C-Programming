#include<stdio.h>

int main(void){
    int n,i,prime=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            printf("%d is not a prime number.",n);
            prime=1;
            break;
        }
    }
    if(prime==0)
        printf("%d is a prime number.",n);
return 0;
}