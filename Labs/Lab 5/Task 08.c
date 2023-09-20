
#include <stdio.h>

int main() {
    int light;

    printf("Enter the light value 0-1000: ");
    scanf("%d", &light);
    if(light<0 || light>1000){
    printf("you are putting invalid value of light\n");
    }
   else if (light > 500) {
        printf(" brightness to  sunshine\n");
    } else if (light >= 100 && light <= 500) {
        printf(" brightness to daylight\n");
    } else {
        printf(" brightness to evening\n");
    }
    return 0;
}
