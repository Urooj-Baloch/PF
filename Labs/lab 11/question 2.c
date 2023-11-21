/* Programmer:Urooj Baloch
Date:21-11-2023
Description:queation 1 lab 11
*/
#include <stdio.h>
#include <string.h>
//Make structure to store information about engine parts
struct EnginePart {
    char serial_number[4];
    int year_of_manufacture;
    char material[50];
    int quantity_manufactured;
};

//  parts with serial numbers between "BB1" and "CC6"
void retrieveInformation(struct EnginePart parts[], int size) {
    printf("Parts with serial numbers between BB1 and CC6:\n");
    for (int i = 0; i < size; ++i) {
        // Compare serial numbers 
        if (strcmp(parts[i].serial_number, "BB1") >= 0 && strcmp(parts[i].serial_number, "CC6") <= 0) {
            printf("Serial Number: %s\n", parts[i].serial_number);
            printf("Year of Manufacture: %d\n", parts[i].year_of_manufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantity_manufactured);
            printf("\n");
        }
    }
}

int main() {
    
    struct EnginePart parts[450];

    int num_parts;

    // ask the user to enter the number of engine parts
    printf("Enter the number of engine parts: ");
    scanf("%d", &num_parts);

    //  data of each engine part
    for (int i = 0; i < num_parts; ++i) {
        printf("Enter details for engine part %d:\n", i + 1);
        printf("Serial Number: ");
        scanf("%s", parts[i].serial_number);
        printf("Year of Manufacture: ");
        scanf("%d", &parts[i].year_of_manufacture);
        printf("Material: ");
        scanf("%s", parts[i].material);
        printf("Quantity Manufactured: ");
        scanf("%d", &parts[i].quantity_manufactured);
    }

    //call the retrieveinformation function
    retrieveInformation(parts, num_parts);

    return 0;
}

