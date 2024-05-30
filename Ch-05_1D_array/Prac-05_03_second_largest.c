#include<stdio.h>

void sec_largest(int a[10],int n);

int main(void){
    int a[10],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The elements are: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    sec_largest(a,n);
return 0;
}

void sec_largest(int a[10],int n){
    int i,max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("Second Max: %d",max);
}