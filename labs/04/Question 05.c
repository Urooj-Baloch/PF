
#include <stdio.h>

int main() {
           int first_person;
           int second_person;
           printf("enter the age of first_person\n");
           scanf("%d",& first_person);
           printf("enter the age of second_person\n");
           scanf("%d",& second_person);
           if ( first_person> second_person){
               printf("first_person is older then second_person");
           }
           else{
               printf("second_person is older then first_person");
           }
           
           
           
    return 0;
}