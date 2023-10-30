/*programmer:urooj baloch
Description:Question 1 lab 8 calculator 
Date:24-10-2023
*/
#include <stdio.h>
//making the function calculate
int calculate(int num1, int num2, char operator) {
    int result;//declaring result in calculate function
    switch (operator) {
        case '+':
            result=num1+num2;
            break;
        case'-' :
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            if(num2==0){
                printf("Don't give the num2 as 0 it becomes undefined enter another integer\n");
            }
            else{
                result=num1/num2;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            
}
    }


int main() {
    int num1, num2, result;
    char operator;

    printf("Enter the first number: ");//taking num1 as input from user
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
 printf("Enter an operator (+, -, *, /): ");//taking the operator from user as what operation he wants to do
    scanf(" %c", &operator); 
    result = calculate(num1, num2, operator);
    printf("Result: %d\n", result);
    return 0;
}
