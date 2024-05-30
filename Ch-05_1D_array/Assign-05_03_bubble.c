#include<stdio.h>

void bubble_sort(int a[10],int n);

int main(void){
    int a[10],i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nThe elements are: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    bubble_sort(a,n);
return 0;
}

void bubble_sort(int a[10],int n){
    int i,temp,smallest,j;
    for(i=0;i<n-1;i++){
        smallest=0;
        for(j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("\nAfter Pass %d: ",i+1);
        for(int k=0;k<n;k++)
            printf("%d\t",a[k]);
    }
}