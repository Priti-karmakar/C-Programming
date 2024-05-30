#include<stdio.h>

int main(void){
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    switch(a>b){
        case 0:
            printf("%f is maximum",b);
            break;
        default:
            printf("%f is maximum",a);
    }
return 0;
}