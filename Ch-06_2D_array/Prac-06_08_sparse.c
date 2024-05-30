#include<stdio.h>

int main(void){
     int a[10][10],b[10][10],i,j,r,c,count=0;
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
        for(j=0;j<c;j++){
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>(r*c)/2)
        printf("It is a sparse matrix");
    else
        printf("not a sparse matrix.");

return 0;
}