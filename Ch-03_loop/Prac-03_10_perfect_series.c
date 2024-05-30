#include<stdio.h>

int main(void){
    int n,i,s,e,sum;
    printf("Enter the starting and ending number: ");
    scanf("%d %d",&s,&e);
    for(n=s;n<=e;n++){
        sum=0;
        i=1;
        while(i<n){
            if(n%i==0)
                sum+=i;
                i++;
        }
            if(sum==n)
                printf("%d\t",n);
        }


return 0;
}
