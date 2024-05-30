#include<stdio.h>
#include<string.h>

int main(void){
    int i,j,a;
    char str[20];
    printf("Enter a string: ");
    gets(str);
    a=strlen(str);
    for(i=0;i<a;i++){
        if(str[i]==' '){
            for(j=i;j<a;j++){
                str[j]=str[j+1];
            }
            a--;
        }
    }
    printf("String without space: %s\n",str);
return 0;
}