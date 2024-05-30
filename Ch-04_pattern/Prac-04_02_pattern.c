#include<stdio.h>
int main(void){
    int n,i,j,k;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        //k=i;
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(k=1;k<=i;k++)
            //printf(" ");
        //for(k=1;k<=i;k++)
            printf("%c ",(char)(i+64));
        printf("\n");
    }
return 0;
}
