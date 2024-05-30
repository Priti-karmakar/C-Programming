#include<stdio.h>

int main(void){
    int n;
    double i,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("%lf",sum);
return 0;
}
