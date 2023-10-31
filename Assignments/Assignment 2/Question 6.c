/*Programmer:Urooj Baloch
Date:28 oct 2023
Description:finding pairs from elements of array that sum to targeted value taken from user
*/
#include <stdio.h>

int main() {
    
   int N,T;
   printf("enter the size of your array\n");//asking/taking input from user that what should be the size of array
   scanf("%d",&N);
   printf("enter the value of your targeted sum\n");//asking user to tell what target did he give to give him sum
  scanf("%d",&T);//storing the given targeted sum of user
   int arr[N];
   for (int i=0;i<N;i++){
       printf("enter the value of element %d\n ",i+1);//taking input of elements of array from user
       scanf("%d",&arr[i]);
   }
  int pair=0;// declaring and intializing pairs to 0
  for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
          if(arr[i]+arr[j]==T){
              printf("these pairs make the sum T (%d,%d)\n ",arr[i],arr[j]);
              pair=1;
          }//END IF
    
  
      }//end for II
  }//end for I
  
if (!pair){
    printf("no any pair makes your targeted sum give some other inputs",T);
}
    return 0;
}