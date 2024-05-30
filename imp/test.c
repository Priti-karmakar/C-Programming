#include<stdio.h>

int main(void){
    int i,n,en,sn,sum,temp,j,fact,digit;
    printf("Enter the starting and ending: ");
    scanf("%d %d",&sn,&en);
    for(n=sn;n<=en;n++){
        temp=n;
        sum=0;
        while(n){
            digit=n%10;
            fact=1;
            for(j=1;j<=digit;j++)
                fact=fact*j;
            sum+=fact;
            n=n/10;
        }
        if(sum==temp)
            printf("%d\t",sum);
    }
return 0;
}