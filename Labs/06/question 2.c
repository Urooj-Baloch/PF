/* Programmer:Urooj Baloch
Date:3-10-2023
Description:Generate febbonacci series upto 10000 and find the sum of generated febbonacci numbers divisible by 3,5 and 7 only
*/
#include <stdio.h>
int main() {
    int num1=1,num2=0,i=1,temp=1,sum=0;
    for(num2=0;num2<10000;){
        temp=num2;
        num2=num2+num1;
        if(num2<10000){
            printf("%d\n",num2);
            if(num2%3==0 || num2%5==0 || num2%7==0){
                sum=sum+num2;
            }//end if
        }//end if
        num1=temp;
    }//end for
    printf("sum of fibbonaci series divisible by 3,5 and 7 is %d \n",sum);
    return 0;
}//end main