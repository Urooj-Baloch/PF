#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 1000
#define MAX_COLS 100
#define MAX_LINE_LENGTH 1024

int main() {
    // Open the CSV file
    FILE *file = fopen("C:\\Users\\K230071\\Desktop\\my_file.csv", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;
    }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("C:\\Users\\K230071\\Desktop\\my_file.csv", "r");

    if (file == NULL) {
        printf("error\n");
        return 1;
    }

    char line[1024];
    char *token;
    int rows = 0, cols = 0;
    char *header = NULL;

    // Read header
    if (fgets(line, sizeof(line), file) != NULL) {
        header = strdup(line);
        rows++;
        token = strtok(line, ",");
        while (token != NULL) {
            cols++;
            token = strtok(NULL, ",");
        }
    }

    // Count rows and columns
    while (fgets(line, sizeof(line), file) != NULL) {
        rows++;
    }

    // Display total rows and columns
    printf("Total rows: %d\n", rows);
    printf("Total columns: %d\n\n", cols);

    // Display header followed by a blank line
    printf("%s\n\n", header);

    // Reset file pointer to beginning
    fseek(file, 0, SEEK_SET);

    // Skip the header
    fgets(line, sizeof(line), file);

    // Display data in a tabular form
    while (fgets(line, sizeof(line), file) != NULL) {
        char *data = strtok(line, ",");
        printf("| %s", data);
        while ((data = strtok(NULL, ",")) != NULL) {
            printf("\t| %s", data);
        }
        printf("\t|\n");
    }

    free(header);
    fclose(file);

    return 0;
}

    // Read and print header
    char line[MAX_LINE_LENGTH];
    fgets(line, sizeof(line), file);
    printf("%s\n\n", line);

    // Count columns
    int numCols = 1;
    for (int i = 0; i < strlen(line); i++) {
        if (line[i] == ',') {
            numCols++;
        }
    }
    printf("Number of columns: %d\n", numCols);

    // Read and print data
    char ***data = (char ***)malloc(MAX_ROWS * sizeof(char **));
    for (int i = 0; i < MAX_ROWS; i++) {
        data[i] = (char **)malloc(numCols * sizeof(char *));
        for (int j = 0; j < numCols; j++) {
            data[i][j] = (char *)malloc(MAX_LINE_LENGTH * sizeof(char));
            if (data[i][j] == NULL) {
                fprintf(stderr, "Memory allocation error.\n");
                return 1;
            }
        }
    }

    int numRows = 0;

    while (fgets(line, sizeof(line), file) != NULL && numRows < MAX_ROWS) {
        char *token = strtok(line, ",");
        int currentCol = 0;

        while (token != NULL && currentCol < numCols) {
            strcpy(data[numRows][currentCol], token);
            token = strtok(NULL, ",");
            currentCol++;
        }

        numRows++;
    }

    // Print total number of rows
    printf("Number of rows: %d\n", numRows);

    // Display data in tabular form
    for (int i = 0; i < numCols; i++) {
        printf("%s\t", data[0][i]);
    }
    printf("\n");

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("%s\t|", data[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < numCols; j++) {
            free(data[i][j]);
        }
        free(data[i]);
    }
    free(data);

    // Close the file
    fclose(file);

    return 0;
}

