/* Programmer: Urooj Baloch
Date:11th september 2023
Description:question 3 Sum of squares of integer
*/
#include <stdio.h>

int main() {
    int n,num,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int count=0;
    
    while(count<n){
        printf("enter an integer:");
        scanf("%d",&num);
        sum+=num *num;
        count=count+1;
    }
        printf("sum of sqrs of %d integer is: %d\n",n,sum);
    
    
    
    

    return 0;
}