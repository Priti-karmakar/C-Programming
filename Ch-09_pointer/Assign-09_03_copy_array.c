#include<stdio.h>

int copy(int a[10],int b[10],int n);

int main(void){
    int a[10],b[10],i,n;
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&*(a+i));
    printf("BEFORE COPYING\n");
    printf("The elements of array 1 are: \n");
    for(i=0;i<n;i++)
        printf("%d\t",*(a+i));
    printf("\nThe elements of array 2 are: \n");
    for(i=0;i<n;i++)
        printf("%d\t",*(b+i));

    copy(a,b,n);
    
    printf("\nAFTER COPYING\n");
    printf("The elements of array 1 are: \n");
    for(i=0;i<n;i++)
        printf("%d\t",*(a+i));
    printf("\nThe elements of array 2 are: \n");
    for(i=0;i<n;i++)
        printf("%d\t",*(b+i));

return 0;
}

int copy(int a[10],int b[10],int n){
    int i;
    int *ptr1=a;
    int *ptr2=b;
    int *last;

    last=&a[n-1];
    while(ptr1<=last){
        *ptr2=*ptr1;
        *ptr1++;
        *ptr2++;
    }

}