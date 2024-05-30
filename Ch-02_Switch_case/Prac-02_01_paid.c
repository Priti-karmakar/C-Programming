#include<stdio.h>

int main(void){
    double u,rate;
    printf("Enter the unit: ");
    scanf("%lf",&u);
    if(u>0&&u<200){
        rate=0.50*u;
        printf("Amount to be paid by the customer: Rs%lf",rate);
    }
    else if(u>201&&u<400){
        rate=100+(0.65*u);
        printf("Amount to be paid by the customer: Rs%lf",rate);
    }
    else if(u>400&&u<600){
        rate=250+(0.80*u);
        printf("Amount to be paid by the customer: Rs%lf",rate);
    }
    else if(u>600){
        rate=425+(1.25*u);
        printf("Amount to be paid by the customer: Rs%lf",rate);
    }
return 0;
}