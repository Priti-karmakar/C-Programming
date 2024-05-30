#include<stdio.h>

int main(void){
    int i,j,n,k;
    char ch;
    printf("Enter row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=i;j++,k++)
            printf("%c ",(char)k+64);
        printf("\n");
    }

    

    
return 0;
}