/* Programmer:Urooj Baloch
Date:3-10-2023
Description:max and min
*/

#include<stdio.h>
#include <limits.h>
int main(){
    int arr[]={34,23,45,67,87,1,4};
    int max=arr[0];
    int min = INT_MAX;
    for(int i=1;i<7;i++){
        printf("%d\n",arr[i]);
        
        if(arr[i]>max){
            max=arr[i];
        }
         if(arr[i]<min){
            min=arr[i];
        }
          
        }
        printf("max is %d \n min is %d\n",max,min);
    

return 0;
}