#include<stdio.h>

int main(void){
    float m;
    printf("Enter marks: ");
    scanf("%f",&m);
    if(m>=90&&m<=100)
        printf("O");
    else if(m>=80&&m<90)
        printf("E");
    else if(m>=70&&m<80)
        printf("A");
    else if(m>=60&&m<70)
        printf("B");
    else if(m>=50&&m<60)
        printf("C");
    else if(m>=40&&m<50)
        printf("D");
    else if(m>=0&&m<40)
        printf("F(FAILED)");
    else
        printf("INVALID");
return 0;
}