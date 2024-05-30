#include<stdio.h>
#include<math.h>

int main(void){
    int num,temp,rem,digit,sum,s,e;
    printf("Enter a starting and ending number: ");
    scanf("%d %d",&s,&e);
    
    for(num=s;num<=e;num++){
        digit=0;
        sum=0;
        for(temp=num;temp!=0;digit++){
            temp/=10;
        }
        for(temp=num;temp!=0;temp/=10){
            rem=temp%10;
            sum+=pow(rem,digit);
        }
        if(sum==num)
            printf("%d\t",num);
        }

return 0;
}
