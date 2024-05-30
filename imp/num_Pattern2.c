#include<stdio.h>

int main(void){
    int i,j,n,t,k;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=i;
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(k=1;k<=i;k++,t++)
            printf("%d ",t);
        printf("\n");
    }
return 0;
}