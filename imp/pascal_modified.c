#include<stdio.h>

int main(void){
    int i,j,k,n,coeff=1;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
            printf("  ");
        for(k=0;k<=i;k++){
            if(k==0||i==0)
                coeff=1;
            else
                coeff=coeff*(i-k+1)/k;
            printf("%d   ",coeff);
        }
        printf("\n");
    }
return 0;
}