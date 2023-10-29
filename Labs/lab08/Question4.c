/*programmer:urooj baloch
Description:Question 4 lab 8 password validation
Date:24-10-2023
*/
#include <stdio.h>
#include <string.h>
int main() {
    char password[10]; //10 charaters can be written
    char savedPassword[] = "Secure123";
    printf("Enter your password: ");//taking input password from user
    scanf("%s",password);
    //length should be of 8 characters/digits
    if (strlen(password) < 8) {
        printf("Password is too short. Please enter at least 8 characters.\n");
    } else {
        //see if the saved password and user input matches
        if (strcmp(password, savedPassword) == 0) {
            printf("Login successful. Welcome!\n");//correct password
        } else {
            printf("Login failed. Incorrect password.\n");//wrong password
        }
    }

    return 0;
}
