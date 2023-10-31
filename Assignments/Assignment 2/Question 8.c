/*programmer:urooj baloch
Description:Question 8 
Date:27-10-2023
*/
#include <stdio.h>

int main() {
    int n;
  printf("enter the positive integer\n");//taking the input integer from user
  //check if the given value from user is not EOF
  while(scanf("%d",&n)!=EOF){
      if(n<0){
        printf("enter the positive integer not negative\n");//if the user give any negative value ask them for positive
       continue;
       
      }
      int persistence=0;//initializing persistence to 0
      while(n>=10){
          int product=1;//declaring and initializing the variable product that will be later multiply by n%10
          while(n>0){
              product*=n%10;
              n/=10;//to remove  the last digit of number
          }
          n=product;//assigning the number to product
          persistence++;//incriment in persistence
          }
          printf("Persistence of the entered number is %d\n", persistence);

       
        printf("Enter a positive integer (or EOF to exit): ");//take the other inputs from user until he put EOF
  }
 
    return 0;
}