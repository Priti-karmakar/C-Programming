#include<stdio.h>

int main(void){
    double a,b;
    char op;
    printf("Enter operator: ");
    scanf("%c",&op);
    printf("Enter two number: ");
    scanf("%lf %lf",&a,&b);
    switch(op){
        case'+':
            printf("%lf+%lf=%lf",a,b,a+b);
            break;
        case'-':
            printf("%lf-%lf=%lf",a,b,a-b);
            break;
        case'*':
            printf("%lf*%lf=%lf",a,b,a*b);
            break;
        case'/':
            printf("%lf/%lf=%lf",a,b,a/b);
            break;
        default:
            printf("Error:)");
    }
return 0;
}