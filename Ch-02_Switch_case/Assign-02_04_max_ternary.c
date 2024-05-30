#include<stdio.h>

int main(void){
    int a,b,c;
    printf("Enter the valuesof a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The largest number is: %d",a>b?a:(b>c?b:c));
return 0;
}