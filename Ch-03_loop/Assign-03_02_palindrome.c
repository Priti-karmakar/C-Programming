#include<stdio.h>
int reverse(int n);

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==reverse(n))
        printf("%d is a palindrome number.",n);
    else
        printf("%d is not a palindrome number.",n);
return 0;
}

int reverse(int n){
    int a,rev=0;
    while(n!=0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    return rev;

}