/*programmer:urooj baloch
Description:Question 5 lab 8
Date:24-10-2023
*/
#include <stdio.h>

// Function to decide whether the car should be used
int decideCarUsage(int carNumber, int dayOfWeek) {
    // Check if both car number and day of the week are either even or odd
    if ((carNumber % 2 == 0 && dayOfWeek % 2 == 0) || (carNumber % 2 != 0 && dayOfWeek % 2 != 0)) {
        return 1; // Return 1 if the car should be used
    } else {
        return 0; // Return 0 if the car should not be used
    }
}

int main() {
    int carNumber, dayOfWeek;

    // Get user input
    printf("Enter the numeric part of your car's number: ");
    scanf("%d", &carNumber);

    printf("Enter the day of the week (1 to 7): ");
    scanf("%d", &dayOfWeek);

    // Call the decideCarUsage function and display the result
    if (decideCarUsage(carNumber, dayOfWeek)) {
        printf("You should use your car on this day.\n");
    } else {
        printf("You should not use your car on this day.\n");
    }

    return 0;
}


