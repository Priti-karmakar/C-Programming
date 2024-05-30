#include<stdio.h>

int main(void){
    int n,i,j,prime;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            prime=0;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    prime=1;
                    break;
                }
            }
            if(prime==0)
            printf("%d\t",i);
        }
       
            
    }
return 0;
}