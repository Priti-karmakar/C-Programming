#include<stdio.h>

struct student{
    int roll;
    char name[20];
    int age;
    float marks;
};

int main(void){
    struct student s[5],*ptr[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter roll no of %d student: ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter name of %d student: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter age of %d student: ",i+1);
        scanf("%d",&s[i].age);
        printf("Enter marks of %d student: ",i+1);
        scanf("%f",&s[i].marks);
        ptr[i]=&s[i];
    }
    printf("Roll no.\tName\tAge\tmarks\n");
    for(i=0;i<5;i++){
        printf("%d\t",ptr[i]->roll);
        printf("%s\t",ptr[i]->name);
        printf("%d\t",ptr[i]->age);
        printf("%f\t",ptr[i]->marks);
        printf("\n");
    }
return 0;
}