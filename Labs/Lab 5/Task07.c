// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int actual_amount;
    float savedamount;
    float amountafterdiscount;
    printf("Enter the prize of items");
    scanf("%d",&actual_amount);
    printf("your actual amount is %d\n",actual_amount);
    if(actual_amount==1999){
        printf("you got upto 50 percent discount\n");
        savedamount=(actual_amount*40)/100;
        printf("Your saved amount  is %f\n",savedamount);
        amountafterdiscount=actual_amount-savedamount;
        printf("Your amount after discount is%f\n",amountafterdiscount);
    }
    else if(actual_amount>=2000 && actual_amount<=4000){
        printf("You got 20 percent discount\n");
        savedamount=(actual_amount*20)/100;
        printf("Your saved amount is %f\n",savedamount);
        amountafterdiscount=actual_amount-savedamount;
        printf("Your amount after discount is %f\n",amountafterdiscount);
    }
    else if(actual_amount>=4001 && actual_amount<=6000){
        printf("you got 30 percent discount\n");
        savedamount=(actual_amount*30)/100;
        printf("Your saved amount is %f\n",savedamount);
        amountafterdiscount=actual_amount-savedamount;
        printf("Your amount after discount is %f\n",amountafterdiscount);
    }
    else if(actual_amount>6000){
        printf("you got 50 percent discount");
        savedamount=(actual_amount*50)/100;
        printf("Your saved amount is %f\n",savedamount);
        amountafterdiscount=actual_amount-savedamount;
        printf("Your amount after discount is %f\n",amountafterdiscount);
    }
    else{
        printf("sorry you don't get any discount");
    }
    

    return 0;
}