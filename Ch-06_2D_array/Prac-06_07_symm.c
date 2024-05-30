#include<stdio.h>

int main(void){
    int a[10][10],b[10][10],i,j,r,c,flag=0;
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
   
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=b[i][j]){
                flag=1;
                break;
            }
        }
        //if(flag==1)
          //  break;
    }
    if(flag==1)
        printf("Not symmetric");
    else
        printf("Symmetric");
        
    


return 0;
}