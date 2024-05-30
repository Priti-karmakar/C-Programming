#include<stdio.h>
int main(void){
    int n,i,j,k;
    char ch='A';
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++,++k)
            printf("%c ",(char)(k+64));
        printf("\n");
    }
return 0;
}
