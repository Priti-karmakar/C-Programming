#include<stdio.h>

int main(void){
    int b,r,d,g;
    printf("Enter the basic salary: ");
    scanf("%d",&b);
    d=0.75*b;
    r=0.15*b;
    printf("His dearance allowance is: %d\n",d);
    printf("His house rent is: %d\n",r);
    g=b+d+r;
    printf("Gross salary is: %d",g);
return 0;
}