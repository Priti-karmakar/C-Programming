#include<stdio.h>

int reverse(int a[10],int n);

int main(void){
    int a[10],i,j,temp,n;
    
    printf("Enter the size: ");
    scanf("%d",&n);
    
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&*(a+i));
    printf("\nBefore reversing\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(a+i));
    
    reverse(a,n);

    printf("\nAfter reversing.\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(a+i));
return 0;
}

int reverse(int a[10],int n){
    int temp,i;
    int *l=a;
    int *r;
    r=&a[n-1];
    l=a;
    while(l<r){
        temp=*l;
        *l=*r;
        *r=temp;
        l++;
        r--;
    }
}