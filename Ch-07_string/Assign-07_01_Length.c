#include<stdio.h>
#include<string.h>
int main(void){
    int i=0,l=0;
    char str[10];
    printf("Enter a char: ");
    gets(str);
    //scanf("%c",&str[10]);
    while(str[i]!='\0'){
        l++;
        i++;
        
    }
    printf("The length of the string is %d",l);
return 0;
}