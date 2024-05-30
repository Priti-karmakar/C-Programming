#include<stdio.h>
#include<string.h>

int main(void){
    int i=0,j,temp;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    j=strlen(str)-1;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("After reversing: %s",str);
return 0;
}