#include<stdio.h>

int strong(int n);

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(strong(n))
        printf("%d is a strong number..",n);
    else
        printf("%d is not a strong number..",n);

return 0;
}

int strong(int n){
    int i,sum=0,digit,fact;
    int temp=n;
    while(n){
        fact=1;
        digit=n%10;
        for(i=1;i<=digit;i++)
            fact=fact*i;
        sum=sum+fact;
        n=n/10;

    }
   /* while(n){
        i=1,fact=1;
        digit=n%10;
        while(i<=digit){
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }*/
    if(sum==temp)
        return 1;
    else
        return 0;
}
