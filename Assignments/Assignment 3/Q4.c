/*
programer: Urooj baloch
Date :6 dec 2023
description : Q4 
*/



#include <stdio.h>
#include <string.h>

typedef struct worker {
    int id;
    char firstname[50];
    char lastname[50];
    int salary;
    char joiningdate[50];
    char department[50];
} Worker;

Worker workers[] = {
    {001, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
    {002, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
    {003, "Vishal", "Verma", 300000, "2014-02-20 09:00:00", "HR"},
    {004, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
    {005, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
    {006, "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
    {007, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
    {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
};

void maxSalary(int numworker) {
    int maxSalary[3] = {0};

    for (int i = 0; i < numworker; i++) {
        if (workers[i].salary > maxSalary[0] && strcmp(workers[i].department, "HR") == 0) {
            maxSalary[0] = workers[i].salary;
        } else if (workers[i].salary > maxSalary[1] && strcmp(workers[i].department, "Admin") == 0) {
            maxSalary[1] = workers[i].salary;
        } else if (workers[i].salary > maxSalary[2] && strcmp(workers[i].department, "Account") == 0) {
            maxSalary[2] = workers[i].salary;
        }
    }

    printf("\tDetails of workers with maximum salary for each department:\n");
    printf("\n");

    for (int i = 0; i < numworker; i++) {
        if (workers[i].salary == maxSalary[0] && strcmp(workers[i].department, "HR") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        } else if (workers[i].salary == maxSalary[1] && strcmp(workers[i].department, "Admin") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        } else if (workers[i].salary == maxSalary[2] && strcmp(workers[i].department, "Account") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        }
    }

    printf("\n\n");//printing new line
}

void totalsalary(int numworker) {
    int totalsalary[3] = {0, 0, 0};

    for (int i = 0; i < numworker; i++) {
        if (strcmp(workers[i].department, "HR") == 0) {
            totalsalary[0] += workers[i].salary;
        } else if (strcmp(workers[i].department, "Admin") == 0) {
            totalsalary[1] += workers[i].salary;
        } else if (strcmp(workers[i].department, "Account") == 0) {
            totalsalary[2] += workers[i].salary;
        }
    }
printf("*********************************************\n");
    printf("departments with total salaries:\n\n");//total salary of departments
    printf("\tHR - %d\n", totalsalary[0]);
    printf("\tAdmin - %d\n", totalsalary[1]);
    printf("\tAccount - %d\n", totalsalary[2]);
}

int main() {
    printf("\n");
    printf("*******Urooj Baloch (23k-0071)********\n");
    printf("\n\n");
    printf("**********************************************\n");
    int numworker = sizeof(workers) / sizeof(workers[0]);
    maxSalary(numworker);
    totalsalary(numworker);

    return 0;
}
