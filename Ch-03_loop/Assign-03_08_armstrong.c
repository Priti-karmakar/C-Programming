#include<stdio.h>
#include<math.h>

int main(void){
    int num,temp,rem,digit=0,sum=0;
    printf("Enter a num: ");
    scanf("%d",&num);
    
    for(temp=num;temp!=0;digit++){
        temp/=10;
    }
    for(temp=num;temp!=0;temp/=10){
        rem=temp%10;
        sum+=pow(rem,digit);
    }
    if(sum==num)
        printf("It is an armstrong number");
    else
        printf("It is not a armstrong number");

return 0;
}
