#include<stdio.h>
#include<math.h>

int dec(int n);
int bin(int m);

int main(void){
    int n,m;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    printf("%d in binary=%d in decimal",n,dec(n));
    printf("\nEnter a decimal: ");
    scanf("%d",&m);
    printf("%d in decimal=%d in binary",m,bin(m));
return 0;
}

int dec(int n){
    int d=0,i=0,digit;
    while(n!=0){
        digit=n%10;
        n/=10;
        d+=digit*pow(2,i);
        i++;
    }
    return d;
}

int bin(int m){
    int b=0,digit,i=1;
    while(m!=0){
        digit=m%2;
        m/=2;
        b+=digit*i;
        i*=10;
    }
    return b;
}