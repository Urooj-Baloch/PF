#include <stdio.h>
int main(){
    int number,number2;
    char operator='+';'-';'*';'/';
    
    printf("enter a number\n");
    scanf("%d",&number);
    printf("enter a number2 \n");
    scanf("%d",&number2);
    printf("enter the operator");
    scanf("\n %c",&operator);
    if(operator=='*'){
     int a=number*number2;
     printf("result of multiplication is %d\n",a);
    }
    else if(operator=='/'){
     int b=number/number2;
     printf("result of division is %d\n",b);
    }
    else if(operator=='+'){
     int c=number+number2;
     printf("result of addition is %d\n",c);
    }
    else if(operator=='-'){
     int d=number-number2;
     printf("result of subtration is %d\n",d);
    }
    else{
        printf("invalid operator\n");
    }
     return 0;
}
     
    

    
