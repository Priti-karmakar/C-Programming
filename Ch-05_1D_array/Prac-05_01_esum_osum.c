#include<stdio.h>

void sum(int a[10],int n);


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
    sum(a,n);
return 0;
}

void sum(int a[10],int n){
    int i,nsum=0,psum=0;
    for(i=0;i<n;i++){
        if(a[i]<0){
            nsum+=a[i];
        }
        else if(a[i]>0)
            psum+=a[i];
    }
    printf("The positive sum of the elements: %d",psum);
    printf("\nThe negative sum of the elements: %d",nsum);

}
