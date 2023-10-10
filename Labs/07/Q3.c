 /* Programmer : Urooj baloch
   Date :10-10-2023
   Description :sum of digits
*/
#include<stdio.h>
int main(){
int num;
int sum=0;
int digit;
printf("enter the number\n");
scanf("%d",&num);
while (num!=0){
  digit=num%10;
 sum=sum+digit;
 num/=10;
}//end while
printf("the sum of digits is %d",sum);
 
}//end main