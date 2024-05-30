#include<stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp1,*fp2;
    int i;
    char ch;
    fp1=fopen("a1.txt","r");
    fp2=fopen("a2.txt","w");
    if(fp1==NULL||fp2==NULL){
        printf("Copying is not posasible..");
        exit(1);
    }
    ch=fgetc(fp1);
    while(ch!=EOF){
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
return 0;
}