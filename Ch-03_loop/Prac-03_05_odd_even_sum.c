#include<stdio.h>

int main(void){
    int n,i,esum=0,osum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\t",i);
            esum+=i;
        }
        else{
            printf("%d\t",i);
            osum+=i;
        }
    }
    printf("\nThe sum of even number is: %d",esum);
    printf("\nThe sum of the odd number is: %d",osum);

return 0;
}