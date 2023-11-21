/* Programmer:Urooj Baloch
Date:21-11-2023
Description:question 5 lab 11
*/
#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int employee_id;
    char name[50];
    float salary;
};

// Define the structure for Organization (nested with Employee)
struct Organization {
    char organisation_name[50];
    int organisation_number;
    struct Employee emp; // Nested Employee structure
};

int main() {
    // Declare and initialize an instance of the outer structure Organization
    struct Organization org = {
        .organisation_name = "ABC Corp",
        .organisation_number = 12345,
        .emp = { // Initialize the nested Employee structure
            .employee_id = 101,
            .name = "UROOJ BALOCH",
            .salary = 50000.0
        }
    };

    // Accessing and printing data members
    printf("Employee ID: %d\n", org.emp.employee_id);
    printf("Name: %s\n", org.emp.name);
    printf("Salary: %.2f\n", org.emp.salary);
    printf("Organization Name: %s\n", org.organisation_name);
    printf("Organization Number: %d\n", org.organisation_number);

    return 0;
}
