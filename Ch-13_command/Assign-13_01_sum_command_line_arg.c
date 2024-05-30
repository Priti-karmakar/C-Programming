#include<stdio.h>
#include<stdlib.h>

int main(int argc,char const *argv[]){
    int sum=0,i;
    for(i=0;i<argc;i++){
        sum=sum+atoi(argv[i]);
    }
    printf("Sum is %d",sum);
    
return 0;
}
//S.D MEAN VAR
//COS
//COPY FILE
//COUNTING THE NUMBER OF VOWELS OF FILE