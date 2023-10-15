#include <stdio.h>
int main(){
    int original_prize=1500;
    int discount_percent=20;
    int discounted_amount;
    int sale_prize;
    printf("original prize is %d\n",original_prize);
    printf("discount percent is %d\n",discount_percent);
    discounted_amount=(20*1500)/100;
    printf("discounted amount is %d\n",discounted_amount);
    sale_prize=original_prize-discounted_amount;
    printf("sale prize is %d\n",sale_prize);
    
    
    
     return 0;
}