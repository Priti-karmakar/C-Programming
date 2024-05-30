//1-x^2/2!+x^4/4!+....
//-x^2/2n(2n-1)

#include<stdio.h>
#include<math.h>
int main(void){
    double x,term=1,sum=1;
    int n,i;
    
    x=x*(3.14159/180.0);

    printf("Enter the value of x and n: ");
    scanf("%lf %d",&x,&n);
    for(i=1;i<=n;i++){
        term*=(-1)*x*x/(2*i*(2*i-1));
        sum+=term;
    }
    printf("The sum is: %lf",sum);
    printf("\n%lf",cos(x));
return 0;
}