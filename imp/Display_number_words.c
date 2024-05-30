#include<stdio.h>
#include<math.h>

int reverse(int n){
    int i,rev=0,a;
    while(n!=0){
        a=n%10;
        rev=rev*10+a;
        n/=10;
    }
    return rev;
}

int main(void){
    int n;
    int num,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    digit=(int)log10(n);
    //printf("Reverse: %d",reverse(n));
    num=reverse(n);
    digit-=((int)log10(num));
    while(num!=0){
        switch(num%10){
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;

        }
        num/=10;
    }
    while(digit){
        printf("Zero");
        digit--;
    }
    
return 0;
}