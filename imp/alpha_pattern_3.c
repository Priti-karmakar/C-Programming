#include<stdio.h>

int main(void){
    int i,j,k,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
          printf("  ");
        for(k=i;k>=1;k--)
            printf("%c ",(char)(k+64));
        printf("\n");
    }
return 0;
}