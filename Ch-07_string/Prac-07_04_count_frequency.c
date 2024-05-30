#include<stdio.h>
#include<string.h>

int main(void){
    int i=0,j=0,a,count=90;
    char str[20];
    printf("Enter a string: ");
    gets(str);
    a=strlen(str);
    for(i=0;i<a;i++){
        count=1;
        if(str[i]!='\0'){
            for(j=i+1;j<a;j++){
                if(str[i]==str[j]){
                    count++;
                    str[j]='\0';
                }
            }
            printf("\n'%c':%d",str[i],count);
        }
    }
return 0;
}
