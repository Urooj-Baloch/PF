/* Programmer:Urooj Baloch
Date:3-10-2023
Description:reverse of elements of array taken as input from user
#include <stdio.h>
*/
#include <stdio.h>

int main() {
    int n;
   
    printf("enter the size of array \n");//take input of size
    scanf("\n %d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter the element %d \n",i+1);//elements from user
        scanf("%d",&arr[i]);
    }//end for
    for(int i=n-1;i>=0;i--){//reverse of those elements
        printf("%d ",arr[i]);
    }//end for
    return 0;
}//end main
