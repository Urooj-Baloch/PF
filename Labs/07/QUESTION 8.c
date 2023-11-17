 /* Programmer : Urooj baloch
   Date :10-10-2023
   Description :LAB 7 QUESTION 8
   */

#include <stdio.h>

// Function to perform bubble sort to sort the array in ascending order
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1] if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, N);

    // Print the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
