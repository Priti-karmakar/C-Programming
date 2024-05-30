#include<stdio.h>

struct student{
    int roll;
    char name[20];
    int age;
};

int main(void){
    struct student s[5],*ptr[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter roll of %d student: ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter name of %d student: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter age of %d student: ",i+1);
        scanf("%d",&s[i].age);
        ptr[i]=&s[i];
    }
    printf("Roll: %d",ptr[1]->roll);
    printf("Name: %s",ptr[1]->name);
    printf("Age: %d",ptr[1]->age);

return 0;
}