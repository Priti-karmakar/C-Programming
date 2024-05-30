#include<stdio.h>
int main(void){
    int n,i,j,k;
    printf("Enter  the no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

return 0;
}
