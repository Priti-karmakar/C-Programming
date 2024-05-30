#include<stdio.h>

void linear(int a[10],int n,int item);

int main(void){
    int a[10],n,i,j,item;
    printf("Enter a size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The elements are: \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nEnter the element to search: ");
    scanf("%d",&item);
    linear(a,n,item);
return 0;
}

void linear(int a[10],int n,int item){
    int i,j,k;
    for(i=0;i<n;i++){
        if(item==a[i]){
            printf("%d is found at position %d",item,i+1);
            break;
        }
    }
    if(i==n)
       printf("%d is not found",item);
}