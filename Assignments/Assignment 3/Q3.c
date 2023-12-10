/*
 * Programmer:Urooj Baloch
 * Date: 8/12/23
 * Description: Q1.c
 */

#include <stdio.h>
#include <stdlib.h>

int** readMatrixFromFile(char* filename, int size) {
    int i, j;
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int** matrix = (int**)malloc(size * sizeof(int*));

    for (i = 0; i < size; i++) {
        matrix[i] = (int*)malloc(size * sizeof(int));
        for (j = 0; j < size; j++) {
            if (fscanf(file, "%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Error reading matrix from file\n");
                exit(EXIT_FAILURE);
            }
            printf("Read value: %d\n", matrix[i][j]);
        }
    }

    fclose(file);
    return matrix;
}

int** computeMaxValues(int** inputMatrix, int size) {
    int newSize = size / 2;
    int** resultMatrix = (int**)malloc(newSize * sizeof(int*));

    for (int i = 0; i < newSize; i++) {
        resultMatrix[i] = (int*)malloc(newSize * sizeof(int));
        for (int j = 0; j < newSize; j++) {
            int max = inputMatrix[2 * i][2 * j];
            max = (inputMatrix[2 * i + 1][2 * j] > max) ? inputMatrix[2 * i + 1][2 * j] : max;
            max = (inputMatrix[2 * i][2 * j + 1] > max) ? inputMatrix[2 * i][2 * j + 1] : max;
            max = (inputMatrix[2 * i + 1][2 * j + 1] > max) ? inputMatrix[2 * i + 1][2 * j + 1] : max;
            resultMatrix[i][j] = max;
        }
    }

    return resultMatrix;
}

void printMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    printf("********UROOJ BALOCH (23K-0071)*********\n");
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <matrix>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char* studentID = "0071";
    char student[10];
    printf("\nEnter the student id: ");
    scanf("%s", student);
    int size = atoi(studentID) % 3 == 0 ? 8 : atoi(studentID) % 2 == 0 ? 4 : 2;

    int** inputMatrix = readMatrixFromFile(argv[1], size);
    int** resultMatrix = computeMaxValues(inputMatrix, size / 2);

    printf("Input Matrix:\n");
    printMatrix(inputMatrix, size);

    printf("\nResult Matrix:\n");
    printMatrix(resultMatrix, size / 2);

    // Free allocated memory
    for (int i = 0; i < size; i++) {
        free(inputMatrix[i]);
    }
    free(inputMatrix);

    for (int i = 0; i < size / 2; i++) {
        free(resultMatrix[i]);
    }
    free(resultMatrix);

    return 0;
}
