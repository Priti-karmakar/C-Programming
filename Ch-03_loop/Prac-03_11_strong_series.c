#include<stdio.h>

int main(void){
    int n,e,s,i,sum,fact,digit,temp;
    printf("Enter the starting and ending number: ");
    scanf("%d %d",&s,&e);
    for(n=s;n<=e;n++){
        sum=0;
        temp=n;
        for(i=n;i>0;i/=10){
            fact=1;
            digit=i%10;
            for(int j=1;j<=digit;j++)
                    fact=fact*j;
            sum=sum+fact;

        }
        if(sum==temp)
            printf("%d\t",n);

    }
return 0;
}
