#include<stdio.h>

int main(void){
    int m1[10][10],m2[10][10],a,b,i,j,m3[10][10];
    printf("Enter the no. of rows and col: ");
    scanf("%d %d",&a,&b);
    printf("Enter the elements for 1st matrix: ");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++)
            scanf("%d",&m1[i][j]);
    }
    
    printf("Enter the elements for 2nd matrix: ");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++)
            scanf("%d",&m2[i][j]);
    }
    
    printf("Addition matrix: \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
return 0;
}