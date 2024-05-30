#include<stdio.h>

int main(void){
    int a,b,sum,diff,mul,div;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    printf("sum is %d\n",sum);
    printf("Diff is %d\n",diff);
    printf("Mul is %d\n",mul);
    printf("Div is %d",div);
return 0;
}