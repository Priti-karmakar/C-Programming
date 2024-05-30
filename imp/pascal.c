#include<stdio.h>

int main(void){
    int n,i,j,coeff=1;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(i==0||j==0)
                coeff=1;
            else
                coeff=coeff*(i-j+1)/j;
            printf("%d  ",coeff);
        }
        printf("\n");
    }
return 0;
}