
#include<stdio.h>

int main(void){
    int pre,curr,bill,consump;
    printf("The previous reading is:");
    scanf("%d",&pre);
    printf("The current reading is:");
    scanf("%d",&curr);
    consump=curr-pre;
    printf("Total consumption of electricity is %d\n",consump);
    bill=3.75*consump;
    printf("The electricity bill is %d",bill);



return 0;
}