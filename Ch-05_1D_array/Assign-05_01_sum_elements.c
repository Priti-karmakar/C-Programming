#include<stdio.h>

int main(void){
    int a[10],n,i,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the rray: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements are: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        sum+=a[i];
    }
    printf("\nhe sum of all the elemnts is: %d",sum);
return 0;
}