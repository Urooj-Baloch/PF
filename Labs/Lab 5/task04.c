#include <stdio.h>
int main(){
    int number,number2;
    char operators;
    
    printf("enter a number\n");
    scanf("%d",&number);
    printf("enter a number2 \n");
    scanf("%d",&number2);
    
    printf("enter operator\n");
    scanf(" %c",&operators);
    
    switch(operators){
        case '+':
         int c=number+number2;
     printf("result of addition is %d\n",c);
     break;
     case '*':
     int a=number*number2;
     printf("result of multiplication is %d\n",a);
     break;
     case '-':
     int d=number-number2;
     printf("result of subtration is %d\n",d);
     break;
     case '/':
     int b=number/number2;
     printf("result of division is %d\n",b);
     break;
     default://calculator
     
     
    }

    
    
    
    
    
    
    
    
     
     return 0;
     
}
    

    

    