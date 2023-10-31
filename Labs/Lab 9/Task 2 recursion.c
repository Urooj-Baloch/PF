


/* 
Prorgrammer:urooj Baloch
Description: task 1 of recursion ()
Date: 31-10-2023
*/
#include <stdio.h>



int mul(int a,int b){
	//base case
	if (b==1){
		return a;
	}
	else {
		return a+mul(a,b-1);//recursive call 
		//making the clone and asking it 
		//to write from n+1 onwards 
	}
}
int main (){
	int num1,num2 ;
	printf("enter the number 1\n");
	scanf("%d",&num1);
	printf("enter the number 2\n");
	scanf("%d",&num2);
	printf("%d",mul(num1,num2));
	return 0;
}
	
