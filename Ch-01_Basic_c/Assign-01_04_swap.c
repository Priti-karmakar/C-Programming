#include<stdio.h>

int main(void){
    int a,b,temp;
    printf("Enter the values of a,b: ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping\n");
    printf("a=%d b=%d",a,b);

    int p,q;
    printf("\nEnter the values of p,q: ");
    scanf("%d %d",&p,&q);
    p=p+q;
    q=p-q;
    p=p-q;
    printf("After swapping\n");
    printf("p=%d q=%d",p,q);
return 0;
}