#include<stdio.h>
#include<math.h>

int main(void){
    int a,b,c,d,root1,root2,real,img;
    printf("The roots of the equation ax^2+bx+c=0 are\n");
    printf("Enter the value of a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    printf("The discriminant is %d\n",d);
    if(d>0){
        printf("The roots are real and different\n");
        root1=(-b+sqrt(d)/(2*a));
        root2=(-b-sqrt(d)/(2*a));
        printf("root1=%d\n",root1);
        printf("root2=%d",root2);
    }
    else if(d==0){
        printf("The roots are real and equal\n");
        root1=-b/(2*a);
        root2=root1;
        printf("root1=%d\n",root1);
        printf("root2=%d",root2);
    }
    else if(d<0){
        printf("The roots are imaginary\n");
        real=-b/(2*a);
        img=sqrt(-d)/(2*a);
        printf("root1=%d+%di\n",real,img);
        printf("root2=%d-%di",real,img);
        
    }

return 0;
}