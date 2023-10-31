/* 
Prorgrammer:urooj Baloch
Description: task 1
Date: 31-10-2023
*/




#include <stdio.h>
void swap(int a,int b){
	int tmp=a;
	a=b;
	b=a;
	
}
int main(){
	int j=2,k=5
	printf("j=%d ,k=%d\n",j,k);
	swap(j,k);
	printf("j=%d, k=%d\n",j,k);
	
		return 0;
}
// A: The function did not contain the pointers thats why code is not giving desired values	

