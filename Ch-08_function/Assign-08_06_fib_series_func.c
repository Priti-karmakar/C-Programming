#include<stdio.h>

void fib(int n);

int main(void){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    fib(n);
return 0;
}

void fib(int n){
    int a=0,b=1,c,i;
    printf("%d\t%d\t",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}