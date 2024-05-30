#include<stdio.h>
#include<string.h>

int main(void){
    int i=0,j,count=0;
    char str[20];
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("The total number of characters are: %d",count);
return 0;
}