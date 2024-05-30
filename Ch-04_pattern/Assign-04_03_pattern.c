#include<stdio.h>

int main(void){
    int n,t,k,i,j;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=i;
        for(j=1;j<=n-i;j++)
            printf("  ");
            for(k=1;k<=i;k++,t++){
                printf("%d ",t);
                 //++t;
            }

        printf("\n");
    }

return 0;
}
