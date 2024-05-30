#include<stdio.h>

void selection_sort(int a[10],int n);

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
    selection_sort(a,n);
    
return 0;
}

void selection_sort(int a[10],int n){
    int i,j,smallestindex,temp,k;
    for(i=0;i<n-1;i++){
        smallestindex=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[smallestindex]){
                smallestindex=j;
            }
        }
        if(smallestindex!=i){
            temp=a[smallestindex];
            a[smallestindex]=a[i];
            a[i]=temp;
        }
        printf("\nAfter Pass %d: ",i+1);
        for(int k=0;k<n;k++)
            printf("%d\t",a[k]);
        
    }
}
