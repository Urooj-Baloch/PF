/* Programmer:Urooj Baloch
Date:21-11-2023
Description:question 4 lab 11
*/
#include <stdio.h>

// Define the structure for an employee
struct Employee {
    char name[50];
    float salary;
    int hours_worked;
};

// Function to increase salary based on hours worked per day
void increaseSalary(struct Employee *employee) {
    if (employee->hours_worked >= 12) {
        employee->salary += 150.0;
    } else if (employee->hours_worked >= 10) {
        employee->salary += 100.0;
    } else if (employee->hours_worked >= 8) {
        employee->salary += 50.0;
    }
}

int main() {
    // Assume there are 10 employees in the company
    struct Employee employees[10];
	int i;
    // Populate employee data (you can add more employees as needed)
    for ( i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_worked);
    }

    // Increase salary based on hours worked per day
    for (i = 0; i < 10; i++) {
        increaseSalary(&employees[i]);
    }

    // Print the name of all employees along with their final salaries
    printf("\nEmployee Details:\n");
    
    for (i = 0; i < 10; i++) {
        printf("Name: %s, Final Salary: $%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
