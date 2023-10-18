/*programmer:urooj baloch
Description:Question 4 lab 7
Date:10-10-2023
*/
#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    if (rows != columns) {
        printf("The matrix must be square to be symmetric.\n");
        return 1;
    }

    int matrix[rows][columns];

    printf("Enter the elements of the matrix:\n");

    // Input the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    int Symmetric = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                Symmetric = 0;
                break;
            }
        }
        if (Symmetric == 0) {
            break;
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the result
    if (Symmetric) {
        printf("Array is Symmetric\n");
    } else {
        printf("Array is not symmetric\n");
    }

    return 0;
}
