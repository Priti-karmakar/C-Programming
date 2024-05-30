#include<stdio.h>
#include<math.h>

int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact*=i;
    return fact;
}
int main(void){
    int n,i;
    double sum=0,t;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=pow(i,2);
        sum+=(double)t/fact(i);
    }
    printf("The sum is: %lf",sum);
return 0;
}