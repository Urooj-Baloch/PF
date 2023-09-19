
#include <stdio.h>

int main() {
   int number;
   printf("enter the value of number\n");
   scanf("%d",&number);
   if(number%3==0){
       printf("The number is multiple of 3\n");
   }
   else{
       printf("The number is not multiple of 3\n");
   }
    return 0;
}
