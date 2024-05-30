#include<stdio.h>
void insert(int a[10],int n,int item,int pos);
void delete(int a[10],int n,int pos);

int main(void){
    int a[10],n,i,pos,item;
   
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the rray: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements are: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nEnter the pos: ");
    scanf("%d",&pos);
    //printf("\nEnter the element: ");
    //scanf("%d",&item);
    //insert(a,n,item,pos);
    delete(a,n,pos);
return 0;
}

void insert(int a[10],int n,int item,int pos){
    int i;
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=item;
    n++;
    printf("After insertion.\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void delete(int a[10],int n,int pos){
    int i;
    if(pos>=n+1)
        printf("Deletion not possible");
    else{
        for(i=pos-1;i<n-1;i++)
            a[i]=a[i+1];
        printf("After Deletion.\n");
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
    }
}
