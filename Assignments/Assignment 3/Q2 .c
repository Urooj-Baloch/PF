/*
programer: Urooj baloch
Date :6 dec 2023
description : Q2 
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_EMPLOYEES 5
#define MAX_DEPARTMENTS 4
#define MAX_NAME_LENGTH 20

typedef struct {
    char name[MAX_NAME_LENGTH];
    char role[MAX_NAME_LENGTH];
    int communication;
    int teamwork;
    int creativity;
} Employee;

typedef struct {
    char name[MAX_NAME_LENGTH];
    Employee employees[MAX_EMPLOYEES];
} Department;

void initializeNames(char names[][MAX_NAME_LENGTH], int numNames) {
    const char *poolOfNames[] = {"John", "Jane", "Bob", "Alice", "David", "Emma", "Michael", "Olivia", "James", "Sophia",
                                 "William", "Isabella", "Daniel", "Emily", "Matthew", "Abigail", "Christopher", "Mia", "Andrew", "Ella"};

    for (int i = 0; i < numNames; ++i) {
        strcpy(names[i], poolOfNames[i]);
    }
}

void initializeRoles(Department *dept, int numRoles) {
    const char *poolOfRoles[] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    for (int i = 0; i < numRoles; ++i) {
        strcpy(dept[i].employees[i].role, poolOfRoles[i]);
    }
}

void initializeEmployees(Department *dept, char names[][MAX_NAME_LENGTH], int numEmployees) {
    for (int i = 0; i < numEmployees; ++i) {
        strcpy(dept->employees[i].name, names[i]);
        dept->employees[i].communication = rand() % 100 + 1;
        dept->employees[i].teamwork = rand() % 100 + 1;
        dept->employees[i].creativity = rand() % 100 + 1;
    }
}

void printDepartmentDetails(Department *dept) {
    printf("| %-10s | %-10s | %-15s | %-8s | %-8s | %-10s |\n", "Department", "Name", "Role", "Communication", "Teamwork", "Creativity");
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        printf("| %-10s | %-10s | %-15s | %-14d | %-8d | %-10d |\n", dept->name, dept->employees[i].name, dept->employees[i].role,
               dept->employees[i].communication, dept->employees[i].teamwork, dept->employees[i].creativity);
    }
    printf("\n");
}

int computeDepartmentSum(Department *dept) {
    int sum = 0;
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        sum += dept->employees[i].communication + dept->employees[i].teamwork + dept->employees[i].creativity;
    }
    return sum;
}

int main() {
    srand(time(NULL));

    char names[MAX_EMPLOYEES * MAX_DEPARTMENTS][MAX_NAME_LENGTH];
    initializeNames(names, MAX_EMPLOYEES * MAX_DEPARTMENTS);

    Department departments[MAX_DEPARTMENTS] = {{"HR"}, {"Finance"}, {"Marketing"}, {"Logistics"}};

    for (int i = 0; i < MAX_DEPARTMENTS; ++i) {
        initializeRoles(departments + i, MAX_EMPLOYEES);
        initializeEmployees(departments + i, names + i * MAX_EMPLOYEES, MAX_EMPLOYEES);
    }

    printf("Employee Details:\n");
    for (int i = 0; i < MAX_DEPARTMENTS; ++i) {
        printDepartmentDetails(departments + i);
    }

    int departmentSums[MAX_DEPARTMENTS];
    for (int i = 0; i < MAX_DEPARTMENTS; ++i) {
        departmentSums[i] = computeDepartmentSum(departments + i);
    }

    int bestDepartmentIndex = 0;
    for (int i = 1; i < MAX_DEPARTMENTS; ++i) {
        if (departmentSums[i] > departmentSums[bestDepartmentIndex]) {
            bestDepartmentIndex = i;
        }
    }

    printf("\nBest Department Award:\n");
    printf("| %-15s | %-15s |\n", "Department", "Total Score");
    for (int i = 0; i < MAX_DEPARTMENTS; ++i) {
        printf("| %-15s | %-15d |\n", departments[i].name, departmentSums[i]);
    }
    printf("\nBest Department: %s\n", departments[bestDepartmentIndex].name);

    return 0;
}
