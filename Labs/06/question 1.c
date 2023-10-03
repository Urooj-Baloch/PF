/*programmer:urooj baloch
Date:3-10-2023
Description :print the number is perfect number or not
*/
#include <stdio.h>
  int main(){
  int num;
  int sum=0;
  printf("enter the number\n");
  scanf("%d",&num);
  for(int count=1;count<=num/2;count++){
  if(num%count==0){ 
   sum+=count;
                }//end if
   }//end for
   if (sum==num){
    printf("the number is perfect number \n",num);
    } //end if
    else {
    printf("num is not a perfect number\n",num);
   } //end else
    return 0;
   } //end main