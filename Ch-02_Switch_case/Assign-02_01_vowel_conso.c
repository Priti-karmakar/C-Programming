#include<stdio.h>

int main(void){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch){
        case'A':
            printf("%c is a vowel",ch);
            break;
        case'E':
            printf("%c is a vowel",ch);
            break;
        case'I':
            printf("%c is a vowel",ch);
            break;
        case'O':
            printf("%c is a vowel",ch);
            break;
        case'U':
            printf("%c is a vowel",ch);
            break;
        case'a':
            printf("%c is a vowel",ch);
            break;
        case'e':
            printf("%c is a vowel",ch);
            break;
        case'i':
            printf("%c is a vowel",ch);
            break;
        case'o':
            printf("%c is a vowel",ch);
            break;
        case'u':
            printf("%c is a vowel",ch);
            break;
        default:
            printf("%c is a consonent.",ch);
    }
return 0;
}