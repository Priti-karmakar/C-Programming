#include<stdio.h>
#include<string.h>

int main(void){
    int i,j;
    char str1[20],str2[20];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++,i++)
        str1[i]=str2[j];
    str1[i]='\0';
    printf("Concatenation of the string: %s",str1);
return 0;
}