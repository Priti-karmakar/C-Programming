#include<stdio.h>

int main(void){
    int a[10],i,n,item,first,last,mid;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The elements are: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nEnter the item to be searched: ");
    scanf("%d",&item);
    first=0;
    last=n-1;
    
    while(first<=last){
        mid=(first+last)/2;
        if(a[mid]<item)
            first=mid+1;
        else if(a[mid]==item){
            printf("%d found at location %d",item,mid+1);
            break;
        }
        else
            last=mid-1;
    }
    if(first>last)
        printf("not found");
return 0;
}