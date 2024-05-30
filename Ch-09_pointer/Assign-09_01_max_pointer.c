#include<stdio.h>

int greater(int a,int b);

int main(void){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The largest is: %d",greater(a,b));
   
return 0;
}

int greater(int a,int b){
    int *m,*n;
    m=&a;
    n=&b;
    if(*m>*n)
        return *m;
    else
        return *n;
}