/* programmer:urooj baloch
Date:9 dec 2023
 description : Q3   

#include <stdio.h>
#include <stdlib.h>

void mergeAndWriteToFile(int recordIDs[], int numRecords);

int main() {

    printf("***********Urooj Baloch***********\n");
    int recordIDs[] = {23, 29, 40};
    int numRecords = sizeof(recordIDs) / sizeof(recordIDs[0]);

    mergeAndWriteToFile(recordIDs, numRecords);

    return 0;
}

void mergeAndWriteToFile(int recordIDs[], int numRecords) {
    FILE *personalFile, *departmentFile, *combineFile;

    personalFile = fopen("personal.txt", "r");
    departmentFile = fopen("department.txt", "r");
    combineFile = fopen("combine.txt", "a");

    if (personalFile == NULL || departmentFile == NULL || combineFile == NULL) {
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }

    int currentID;
    char name[50];
    float salary;

    for (int i = 0; i < numRecords; i++) {
        // Read from Personal.txt
        fseek(personalFile, 0, SEEK_SET);
        int personalFound = 0;
        while (fscanf(personalFile, "%d %s", &currentID, name) != EOF) {
            if (currentID == recordIDs[i]) {
                personalFound = 1;

                // Read from Department.txt
                fseek(departmentFile, 0, SEEK_SET);
                int departmentFound = 0;
                while (fscanf(departmentFile, "%d %f", &currentID, &salary) != EOF) {
                    if (currentID == recordIDs[i]) {
                        departmentFound = 1;

                        // Write to Combine.txt
                        fprintf(combineFile, "%d %s %.2f\n", currentID, name, salary);
                        break;
                    }
                }

                if (!departmentFound) {
                    fprintf(stderr, "ID %d not found in department.txt\n", recordIDs[i]);
                }

                break;
            }
        }

        if (!personalFound) {
            fprintf(stderr, "ID %d not found in personal.txt\n", recordIDs[i]);
        }
    }

    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}
