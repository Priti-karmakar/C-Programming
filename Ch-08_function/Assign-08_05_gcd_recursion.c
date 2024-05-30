#include<stdio.h>

int gcd(int a,int b);

int main(void){
    int m,n;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    printf("The gcd is: %d",gcd(m,n));
return 0;
}

int gcd(int a,int b){
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
        return gcd(b,a%b);
}