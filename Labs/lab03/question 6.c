#include <stdio.h>
int main(){
    int week1=8;
    int week2=12;
    int week3=12;
    int week4=9;
    int total_week=4;
    int total_hrs;
    float avg;
    total_hrs=week1+week2+week3+week4;
    printf("Total hours are %d\n",total_hrs);
    avg=total_hrs/total_week;
    printf("Average he volunteer per week is %f",avg);
    
    
    
    
     return 0;
}