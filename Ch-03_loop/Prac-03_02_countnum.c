#include<stdio.h>

int main(void){
    int n,i,digit,count=0,sum=0,mul=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        digit=n%10;
        n=n/10;
        count++;
        printf("%d\t",digit);
        sum+=digit;
        mul*=digit;
    }while(n!=0);
    printf("\nNumber of digits in the number: %d",count);
    printf("\nThe sum is: %d",sum);
    printf("\nThe product is: %d",mul);

return 0;
}