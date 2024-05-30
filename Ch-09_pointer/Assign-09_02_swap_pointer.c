#include<stdio.h>

int swap(int *a,int *b);

int main(void){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("After swapping: %d %d",x,y);
return 0;
}

int swap(int *a,int *b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}