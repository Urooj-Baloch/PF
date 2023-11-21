/* Programmer:Urooj Baloch
Date:21-11-2023
Description:queation 1 lab 11
*/

#include <stdio.h>

// Define the structure to store student data
struct Student {
    int roll_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};

// Function to print names of students who joined in a particular year
void printStudentsByYear(struct Student students[], int size, int year) {
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < size; ++i) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student given their roll number
void printStudentByRollNumber(struct Student students[], int size, int roll_number) {
    for (int i = 0; i < size; ++i) {
        if (students[i].roll_number == roll_number) {
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", roll_number);
}

int main() {
    // Assuming there are not more than 450 students in the college
    struct Student students[450];

    int num_students;

    // Prompt the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Input data for each student
    for (int i = 0; i < num_students; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
    }

    // Prompt the user to perform actions
    int choice;
    printf("\nChoose an action:\n");
    printf("1. Print names of students who joined in a particular year\n");
    printf("2. Print data of a student by roll number\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform the chosen action
    switch (choice) {
        case 1:
            // Print names of students who joined in a particular year
            int year_to_search;
            printf("Enter the year to search: ");
            scanf("%d", &year_to_search);
            printStudentsByYear(students, num_students, year_to_search);
            break;
        case 2:
            // Print data of a student by roll number
            int roll_number_to_search;
            printf("Enter the roll number to search: ");
            scanf("%d", &roll_number_to_search);
            printStudentByRollNumber(students, num_students, roll_number_to_search);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

