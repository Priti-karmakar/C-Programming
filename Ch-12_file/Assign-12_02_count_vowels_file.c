#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    char ch;
    int v=0;
    fp=fopen("a1.txt","r");
    if(fp==NULL){
        printf("Not found");
        exit(1);
    }
    ch=fgetc(fp);
    while(ch!=EOF){
         if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++;
        ch=fgetc(fp);
    }

    printf("No of vowels present are: %d",v);
    fclose(fp);
return 0;
}
