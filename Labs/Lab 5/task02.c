
#include <stdio.h>

int main() {
    int t;
    printf("enter the value of t\n");
    scanf("%d",&t);
    //ignoring the last two digits of time
    t=t/100;
    if(t>=5 && t<=11){
        printf("good morning\n");
    }
    else if(t>=12 && t<=18){
        printf("good evening\n");
    }
    else if(t>18 && t<=24){
        printf("good night");
    }
    else{
        printf("go to sleep its very late\n");
    }
    return 0;
}