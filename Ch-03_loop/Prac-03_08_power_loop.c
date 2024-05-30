#include<stdio.h>

int power(int n,int m);

int main(void){
    int n,m;
    printf("Enter the base: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&m);
    printf("%d",power(n,m));

return 0;
}

int power(int n,int m){
    int mul=1;
    while(m!=0){
        mul*=n;
        m--;
    }
    return mul;
}