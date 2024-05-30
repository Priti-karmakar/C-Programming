#include<stdio.h>

void max_min(int a[10],int n);

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
    max_min(a,n);
    
return 0;
}

void max_min(int a[10],int n){
    int i,max,min;
    max=min=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
        else if(a[i]<min)
            min=a[i];
    }
    printf("The max: %d",max);
    printf("\nThe min: %d",min);

}