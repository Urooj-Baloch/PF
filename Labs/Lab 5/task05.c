#include <stdio.h>
int main(){
   char ans;
    printf("enter the ans\n");
    scanf("%c",&ans);
    if (ans >='a'&& ans<='z'){
        printf("ans is a small alphabet\n");
    }
    else if(ans >='A' && ans <='Z'){
        printf("ans is capital alphabet\n");
    }
    else if(ans>='0'&& ans<='9'){
        printf("ans is a digit\n");
    }
    else{
        printf("ans is a special character");
    }

    
    
    
    
    
    
    
    
     
     return 0;
     
}
    