/* 
Prorgrammer:urooj Baloch
Description: task 1 of recursion (finding the factorial)
Date: 31-10-2023
*/
#include <stdio.h>



int factorial(int n){
	//base case
	if (n==1){
		return 1;
	}
	else {
		return n*factorial(n-1);//recursive call 
		//making the clone and asking it 
		//to write from n+1 onwards 
	}
}
int main (){
	int number ;
	printf("enter the number you want to know the factorial\n");
	scanf("%d",&number);
	printf("%d",factorial(number));

	return 0;
}
