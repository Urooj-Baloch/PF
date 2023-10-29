/*programmer:urooj baloch
Description:Question 1 lab 8 swapping of two integers
Date:24-10-2023
*/
#include <stdio.h>
#include <string.h>
int main() {
    int num1,num2,temp;
    printf("enter the value of num1 before swaping\n");
    scanf("%d",&num1);
printf("enter the value of num2 before swapping\n");
    scanf("%d",&num2);
    temp=num2;
    num2=num1;
    num1=temp;
    printf(" number 1 after swaping  %d:\n",num1);
printf(" number 2 after swaping  %d:\n",num2);
    return 0;
}
