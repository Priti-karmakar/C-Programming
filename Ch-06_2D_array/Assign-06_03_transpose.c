#include<stdio.h>

int main(void){
    int a[10][10],b[10][10],i,j,r,c;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            b[i][j]=a[j][i];
    }

    printf("Transpose of the matrix:\n ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }

return 0;
}