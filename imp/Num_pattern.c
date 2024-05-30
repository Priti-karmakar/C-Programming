#include<stdio.h>

int main(void){
    int n,i,j,t=1;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++,t++){
            printf("%d ",t);
        }
        printf("\n");
    }

return 0;
}