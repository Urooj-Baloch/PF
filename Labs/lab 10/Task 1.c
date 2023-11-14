/* Programmer:Urooj Baloch
Date:3-10-2023
Description:task 1 lab 10
*/


#include<stdio.h>
void printArr(void*arr,int size,char type){
	int datatype;
	switch(type){
		case 'i':
			for(int i=0;i<size;++i){
				printf("%d,",((int*)arr)[i]);
			}
		printf("\n");
			break;
		case 'c':
			for(int i=0;i<size;++i){
				printf("%c,",((char*)arr)[i]);
			}
		printf("\n");
			break;
		case 'f':
			for(int i=0;i<size;++i){
				printf("%f,",((float*)arr)[i]);
			}
		printf("\n");
		break;
		default:
			break;
	}
}//end void
int main(){
	int a[5]={2,3,4,5,6};
	char b[5]={'a','b','c','d','e'};
	float c[5]={2.5,3.4,4.6,5.6,6.4};
	printArr(a,5,'i');
	printArr(b,5,'c');
	printArr(c,5,'f');
	return 0;
	
}
