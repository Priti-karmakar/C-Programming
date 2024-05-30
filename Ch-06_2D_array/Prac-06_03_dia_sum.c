#include<stdio.h>

int main(void){
    int a[10][10],b[10][10],i,j,sum=0,r,c;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    printf("the elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<r;i++){
        sum+=a[i][i];
    }
    printf("The sum of major diagonal elements are: %d",sum);
    sum=0;
    for(i=0;i<r;i++){
        sum+=a[i][r-i-1];
    }
    printf("\nThe sum of minor diagonal elements are: %d",sum);
return 0;
}