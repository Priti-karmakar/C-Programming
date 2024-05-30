#include<stdio.h>

int main(void){
    int i,n,sum=0;
    //printf("Enter a number: ");
    //scanf("%d",&n);
    for(i=1;i<=20;i++){
    if(i%2==0){
        printf("%d\t",i);
        sum+=i;
    }
    //else
      //  printf("%d is odd",n);
    }
    printf("\neven sum: %d",sum);
return 0;
}