#include<stdio.h>
#include<string.h>

int main(void){
    int i=0,v=0,c=0;
    char str[20],ch;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0'){
        ch=str[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++;
        else
            c++;
        i++;
    }
    printf("No of vowels: %d",v);
    printf("\nNo of consonant: %d",c);
return 0;
}
