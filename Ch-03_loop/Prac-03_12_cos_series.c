#include<stdio.h>
#include<math.h>

int main(void){
    int n,x1,i,j;
    float x,sign,cosx,fact;
    printf("Enter the value of n and x: ");
    scanf("%d %f",&n,&x);
    x1=x;
    x=x*(3.142/180.0);
    cosx=1;
    sign=-1;
    for(i=2;i<=n;i+=2){
        fact=1;
        for(j=1;j<=i;j++){
            fact=fact*j;
        }
        cosx=cosx+(pow(x,i)/fact)*sign;
        sign=sign*(-1);
    }
    printf("Sum= %f",cosx);
    printf("\n%lf",cos(x));
return 0;
}
