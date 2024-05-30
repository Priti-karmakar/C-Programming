#include<stdio.h>

int main(void){
    int n,i,j,k,l,p;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("%c ",(char)(j+64));
        for(k=n-i;k>=1;k--)
            printf("  ");
        for(p=1;p<=n-i;p++)
            printf("  ");
        for(l=i;l>=1;l--)
            printf(" %c",(char)(l+64));

        printf("\n");
    }

    /*for(i=n;i>=1;i--){
    for(j=1;j<=i;j++)
            printf("%c ",(char)(j+64));
        printf("\n");
    }*/

    /*p=1;
    for(i=1;i<=n;i++){
        for(j=1;j<2*n;j++){
            if(j==p||j==2*n-p){
                for(k=1;k<=i;k++)
                   printf("%c ",(char)(k+64));

                for(l=i;l>=1;l--)
                   printf(" %c",(char)(l+64));}
                //printf("%c",(char)(i+64));
            else
                printf(" ");
        }

            p++;
            printf("\n");
    }*/
return 0;
}

