/* Programmer : Urooj baloch
   Date :10-10-2023
   Description :Q10 LAB 7
   */

#include <stdio.h>

int main() {
    int N, S;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    // Input the sum to find
    printf("Enter the sum to find: ");
    scanf("%d", &S);

    int A[N];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Find the subarray with sum S
    int currentSum = A[0];
    int start = 0;
    int found = 0;

    for (int end = 1; end <= N; end++) {
        while (currentSum > S && start < end - 1) {
            currentSum -= A[start];
            start++;
        }

        if (currentSum == S) {
            found = 1;
            printf("The elements from index %d to %d when summed result in the output of %d:\n", start, end - 1, S);
            for (int i = start; i < end; i++) {
                printf("%d ", A[i]);
            }
            break;
        }

        if (end < N) {
            currentSum += A[end];
        }
    }

    if (!found) {
        printf("No subarray found with the given sum.\n");
    }

    return 0;
}




