#include<stdio.h>
#include<math.h>

int main(void){
    int a,b,c;
    float s,area=0;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/3;
    printf("The semiperimeter is: %0.2f\n",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %0.2f",area);
return 0;
}