#include<stdio.h>
#include<math.h>
int main(void){
    int n,i,j,fact,sign=-1;
    float x,s=0,p;
    printf("Enter the value of x and n: ");
    scanf("%f %d",&x,&n);
    for(i=1;i<=n;i+=2){
        p=1;
        fact=1;
        for(j=1;j<=i;j++){
            p=p*x;
            fact=fact*j;
        }
        sign=-1*sign;
        s+=sign*p/fact;
    }
    printf("sin%0.2f=%0.2f",x,s);
    printf("\nsin%0.2f=%0.2f",x,sin(x));

return 0;
}
