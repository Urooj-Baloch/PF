/* Programmer:Urooj Baloch
Date:21-11-2023
Description:question 5 lab 11
*/
#include <stdio.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};

void addDaysToDate(struct Date *date, int daysToAdd) {
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    // Set the structure with the current date
    date->day = current_time->tm_mday;
    date->month = current_time->tm_mon + 1; // tm_mon is 0-based
    date->year = current_time->tm_year + 1900; // tm_year is years since 1900

    // Add days to the date
    date->day += daysToAdd;

    // Adjust the date if necessary
    while (date->day > 30) {
        date->day -= 30;
        date->month++;
    }
    while (date->month > 12) {
        date->month -= 12;
        date->year++;
    }
}

int main() {
    struct Date currentDate;

    // Add 45 days to the current date
    addDaysToDate(&currentDate, 45);

    // Display the final date
    printf("Final Date: %d/%d/%d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}

