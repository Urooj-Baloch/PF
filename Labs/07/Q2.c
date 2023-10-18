/*programmer:urooj baloch
Description:Question 2 lab 7
Date:10-10-2023
*/
#include <stdio.h>
//  reverse an array or a portion of an array
void reverse_Array(int arr[], int strt, int end) {
    while (strt < end) {
        int temp = arr[strt];
        arr[strt] = arr[end];
        arr[end] = temp;
        strt++;
        end--;
    }
}

//  left rotate the array by d positions
void left_Rotate_Array(int arr[], int n, int p) {
    if (p == 0 || p == n) {
        return; //  if d is 0 or equal to the array size no need to rotate
    }
    reverse_Array(arr, 0, p - 1);
    reverse_Array(arr, p, n - 1);
    reverse_Array(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p = 2; // Number of positions to rotate

    printf("Original Array before rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    left_Rotate_Array(arr, n, p);

    printf("\nArray after left rotation by %d positions: ", p);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
