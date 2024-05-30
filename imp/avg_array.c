#include<stdio.h>

int main(void){
    int n,a[10],i,sum=0;
    float avg;
    printf("Enter elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        sum+=a[i];
    }
    printf("\n%d\n",sum);
    avg=sum/n;
    printf("%f",avg);
return 0;
}