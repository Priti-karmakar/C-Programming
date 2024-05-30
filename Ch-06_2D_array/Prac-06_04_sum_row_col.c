#include<stdio.h>

int add_col(int a[10][10],int r,int c);
int add_row(int a[10][10],int r,int c);

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
    add_col(a,r,c);
    add_row(a,r,c);

return 0;
}

int add_col(int a[10][10],int r,int c){
    int sum,i,j;
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum+=a[j][i];
        }
        printf("\nThe sum of the element %d column: %d\n",i+1,sum);
    }

}
    
int add_row(int a[10][10],int r,int c){
    int sum,i,j;
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum+=a[i][j];
        }
        printf("\nThe sum of the element %d row: %d\n",i+1,sum);
    }
}
