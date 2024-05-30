#include<stdio.h>
#include<string.h>

void reverse(char str[20]);

int main(void){
    int i,j,flag=0;
    char str[20];
    printf("Enter a string: ");
    gets(str);
    j=strlen(str);
    for(i=0;i<j;i++){
        if(str[i]!=str[j-i-1]){
            flag=1;
            break;
        }
    }
    if(flag)
        printf("The string is not a palindrome.");
    else
        printf("The string is a palindrome");
return 0;
}