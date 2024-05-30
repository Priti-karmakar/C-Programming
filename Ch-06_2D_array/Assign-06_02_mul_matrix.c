#include<stdio.h>

int main(void){
    int m1[10][10],m2[10][10],m3[10][10],a,b,c,d,i,j,k;
    printf("Enter the order of 1st matrix: ");
    scanf("%d %d",&a,&b);
    printf("Enter the elements of 1st matrix: ");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++)
            scanf("%d",&m1[i][j]);
    }
    printf("Enter the order of 2nd matrix: ");
    scanf("%d %d",&c,&d);
    if(b==c){
        printf("Multiplication is  possible.");
        printf("\nEnter the elements of 2nd matrix: ");

        for(i=0;i<c;i++){
            for(j=0;j<d;j++)
                scanf("%d",&m2[i][j]);
        }
        for(i=0;i<a;i++){
            for(j=0;j<d;j++){
                m3[i][j]=0;
                for(k=0;k<b;k++)
                    m3[i][j]+=m1[i][k]*m2[k][i];
            }
        }
        printf("Multiplication matrix\n");
        for(i=0;i<a;i++){
            for(j=0;j<d;j++)
                printf("%d\t",m3[i][j]);
            printf("\n");
        }
    }
    else
        printf("Matrix multiplication not possible.");
return 0;
}