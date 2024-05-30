#include<stdio.h>

int main(void){
    int max,i,n,count;
    printf("Enter a number of terms: ");
    scanf("%d",&max);
    for(n=1;n<=max;n++){
        count=0;
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count==0&&n!=1)
            printf("%d\t",n);
    }
return 0;
}