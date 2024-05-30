#include<stdio.h>

int main(void){
    int num1,num2,max,min;
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        max=num1;
        min=num2;
    }
    else{
        max=num2;
        min=num1;
    }
    for(;!((max%num1==0)&&(max%num2==0));max++);
    printf("LCM is %d\n",max);

    for(;!((num1%min==0)&&(num2%min==0));min--);
    printf("HCF is %d",min);
return 0;
}