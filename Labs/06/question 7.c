/* Programmer:Urooj Baloch
Date:3-10-2023
Description:Q7 lab 6 sum of elements of array
*/
#include <stdio.h>
int main() {
    int integers[10]={};
    int integer;
    int sum=0;
    for(int i=0;i<10;i++){
        printf("enter the value of integer on your choice\n");
        scanf("%d",& integer);
        integers[i]=integer;
    }//end for
    for(int i=0;i<10;i++){
        printf("input given by user %d\n",integers[i]);
        sum=sum+integers[i];
    }//end for
    printf("sum of all given inputs is %d",sum);
    return 0;
}//end main
