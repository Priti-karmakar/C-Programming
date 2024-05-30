#include<stdio.h>
#include<string.h>

int main(void){
    int i=0,j,flag=0;
    char str1[20],str2[20];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
       i++;
    }
    if(flag==0)
        printf("They are same.");
    else
        printf("They are not same.");
return 0;
}