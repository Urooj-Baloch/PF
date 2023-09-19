#include <stdio.h>
int main(){
    char ans;
    printf("Are you sure you want to delete[Y/y]/[N/n]\n");
    scanf("%c",&ans);
    switch(ans){
        case 'Y':
        printf("deleted");
        break;
        case 'y':
        printf("deleted");
        break;
        case 'N':
        printf("cancel delete");
        break;
        case 'n':
        printf("cancel delete");
        default://out
    }

    
    
    
    
    
    
    
    
     
     return 0;
     
}
    

    