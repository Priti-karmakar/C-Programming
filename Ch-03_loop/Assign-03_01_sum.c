#include<stdio.h>

int main(void){
    int n,i,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The sum is: %d",sum);
return 0;
}