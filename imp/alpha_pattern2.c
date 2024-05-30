#include<stdio.h>

int main(void){
    int i,j,k,n;
    printf("Enter row: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(k=1;k<=i;k++)
            printf("%c ",(char)(i+64));
        printf("\n");  
    }
return 0;
}