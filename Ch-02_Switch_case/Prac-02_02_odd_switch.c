#include<stdio.h>

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n%2==0){
        case 0:
            printf("%d is odd no.",n);
            break;
        default:
            printf("%d is a even no. ",n);
    }

return 0;
}