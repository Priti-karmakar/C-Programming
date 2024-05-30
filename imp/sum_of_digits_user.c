#include<stdio.h>

int main(void){
    int n,i,digit,sum=0;
    printf("Enter a num: ");
    scanf("%d",&n);
    do{
        digit=n%10;
        sum+=digit;
        n=n/10;
    }while(n!=0);
    printf("%d",sum);
return 0;
}