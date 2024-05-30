#include<stdio.h>

int main(void){
    int a[20],i,j,n,count=0,f[20];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    printf("\nThe elements are: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[j]==a[i]){
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0){
            f[i]=count;
        }
     }
     printf("\nThe freq of the elements are: \n");
     for(i=0;i<n;i++){
         if(f[i]!=0)
            printf("%d occurs %d times\n",a[i],f[i]);
     }
return 0;
}