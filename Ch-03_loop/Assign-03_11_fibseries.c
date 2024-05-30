#include<stdio.h>

void fib(int n);

int main(void){
    int n;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);
    fib(n);
return 0;
}

void fib(int n){
    int i,a=0,b=1,c;
    printf("%d\t%d\t",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}