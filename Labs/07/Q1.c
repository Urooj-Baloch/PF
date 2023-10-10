
   /* Programmer : Urooj baloch
   Date :10-10-2023
   Description :divide two numbers without using division operator
   */
  #include <stdio.h>
  int main(){
  int divisor;
  int dividend;
  int quotient=0;
  printf("enter the value of dividend\n");
  scanf("%d",&dividend);
  printf("enter the divisor\n");
  scanf("%d",&divisor);
  if(divisor==0){
                printf("you can not put zero\n");
}//end if
 else{
      while (dividend>=0){
      dividend-=divisor;
     
    //quotient++;
      }
      printf("quotient is %d",quotient);
}//end else

     return 0;

 }//end main
