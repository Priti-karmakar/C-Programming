#include<stdio.h>

int main(void){
    int i,j,k,n,t=10;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(k=1;k<=i;k++,t--)
            printf("%d ",t);
        printf("\n");
    }
return 0;
}