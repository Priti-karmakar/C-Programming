#include<stdio.h>
#include<math.h>

int main(void){
    int a[10],n,i,sum=0,sum1=0;
    float m,v,s;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The elements are: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        sum+=a[i];
        sum1+=(a[i]*a[i]);
    }
    m=sum/n;
    v=((sum1/n)-pow(m,2));
    s=sqrt(v);
    printf("\nThe AM is: %f",m);
    printf("\nThe variance is: %f",v);  
    printf("\nThe SD is : %f",s);  
return 0;
}