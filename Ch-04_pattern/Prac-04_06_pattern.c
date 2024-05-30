#include<stdio.h>
int main(void){
    int n,i,j,k,t=10;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--,t--)
            printf("%d  ",t);
        printf("\n");
    }

return 0;
}
