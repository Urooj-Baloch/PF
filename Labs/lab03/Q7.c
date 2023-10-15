#include <stdio.h>
#include <math.h>
int main(){
    int x1 ;
    int x2;
    int y1;
    int y2;
    int distance;
    printf("enter the value of x1\n");
    scanf("%d",&x1);
    printf("enter the value of x2\n");
    scanf("%d",&x2);
    printf("enter the value of y1 \n");
    scanf("%d",&y1);
    printf("enter the value of y2 \n");
    scanf("%d",&y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("distance is %d",distance);
    
    
    
     return 0;
}