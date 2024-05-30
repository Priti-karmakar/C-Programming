#include<stdio.h>

int main(void){
    int l,b,r,circum,area1,peri,area2;
    printf("Enter the length and breadth: ");
    scanf("%d %d",&l,&b);
    printf("Enter the radius: ");
    scanf("%d",&r);
    circum=2*3.14*r;
    area1=3.14*r*r;
    peri=2*(l+b);
    area2=l*b;
    printf("Perimeter and area of rectangle is: %d and %d\n",peri,area2);
    printf("Circumference and area of the circle: %d and %d",circum,area1);
return 0;
}