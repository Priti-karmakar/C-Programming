#include<stdio.h>

void add_matrix(int m1[10][10],int m2[10][10],int a,int b,int c,int d);

int main(void){
    int m1[10][10],m2[10][10],m3[10][10],a,b,c,d,i,j;
    printf("Enter the order of the first matrix: ");
    scanf("%d %d",&a,&b);
    printf("Enter the elements of the 1st matrix: ");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++)
            scanf("%d",&m1[i][j]);
    }
    printf("The element are:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++)
            printf("%d\t",m1[i][j]);
        printf("\n");
    }
    printf("Enter the order of the second matrix: ");
    scanf("%d %d",&c,&d);
    printf("Enter the elements of the 2nd matrix: ");
        for(i=0;i<b;i++){
            for(j=0;j<d;j++)
                scanf("%d",&m2[i][j]);
        }
        printf("The element are:\n");
        for(i=0;i<b;i++){
            for(j=0;j<d;j++)
                printf("%d\t",m2[i][j]);
            printf("\n");
        }
    add_matrix(m1,m2,a,b,c,d);

return 0;
}

void add_matrix(int m1[10][10],int m2[10][10],int a,int b,int c,int d){
    int i,j,m3[10][10];
    if(a==c&&b==d){
        
        printf("Addition matrix:\n");
        for(i=0;i<a;i++){
            m3[i][j]=0;
            for(j=0;j<b;j++)
                m3[i][j]=m1[i][j]+m2[i][j];
        }
        for(i=0;i<a;i++){
            for(j=0;j<b;j++)
                printf("%d\t",m3[i][j]);
            printf("\n");
        }
    }
    else
        printf("Addition not possible.");
}