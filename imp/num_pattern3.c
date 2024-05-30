#include<stdio.h>

int main(void){
    int i,j,k,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(k=i;k<2*i-1;k++)
            printf("%d ",k);
        for(k=2*i-1;k>=i;k--)
            printf("%d ",k);

        printf("\n");
    }
return 0;
}